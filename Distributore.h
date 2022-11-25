#include<iostream>
#include<vector>

#include"Prodotto.h"

using namespace std;

class Distributore{
	
	private:
		
		vector<Prodotto>inventario;
		float mDisponibili=0;
	public:
	
		Distributore(){
			
			mDisponibili=0;
		}	
		
		void addProdotto(Prodotto p){
			
			inventario.push_back(p);
		}
				
		double acquistaProdotto(int codice,double importo){
			
			double resto;
			int qnt=0;
			
			for(int i=0;i<inventario.size();i++){
				
				if(inventario.at(i).getCodice()==codice){
					
					if(inventario.at(i).getQuantita()==0){
						
						cout<<"Prodotto Esaurito"<<endl;
						break;
					}
					
	
					if(importo==inventario.at(i).getPrezzo()){
						
						mDisponibili=importo;
						
						cout<<"Erogazione del prodotto: "<<inventario.at(i).getNome()<<endl;
						cout<<endl;
						
						
						qnt=inventario.at(i).getQuantita();
						qnt--;
						inventario.at(i).setQuantita(qnt);
						
						return 0;
						
					}
					
					else if(importo>inventario.at(i).getPrezzo()){
						
						mDisponibili=importo;
					
						resto=importo-inventario.at(i).getPrezzo();
						
						if(mDisponibili<resto){
							
							cout<<"Monete Insufficienti per erogare il resto"<<endl;
							return -1;
							
						}
						else{
							
							mDisponibili-=resto;
							
							cout<<"Erogazione del prodotto: "<<inventario.at(i).getNome()<<endl;
							cout<<endl;
							
							qnt=inventario.at(i).getQuantita();
							qnt--;
							inventario.at(i).setQuantita(qnt);
							
							return resto;
							
							
						}
						
	
					}
					
					if(importo<inventario.at(i).getPrezzo()){
						
						cout<<"Importo Insufficiente"<<endl;
						cout<<endl;
						
						return -1;
					}
							
				}
			
			}	
				
		}
		
	
		void stampaProdotti(){
			
			for(int i=0;i<inventario.size();i++){
				
				if(inventario.at(i).getQuantita()!=0){
					
					inventario.at(i).stampa();
					cout<<endl;
				}
				
				
			
			}
			
		}
		
		float inserireMoneta(){
			
			int valuta=0;
			bool scelta;
			float importoTotale=0;
			
			
			do{
			
			
					cout<<"-----LEGENDA VALUTA-----"<<endl;
					cout<<"1 moneta 5 centesimi    "<<endl;
					cout<<"2 moneta 10 centesimi   "<<endl;
					cout<<"3 moneta 50 centesimi   "<<endl;
					cout<<"4 moneta 1 euro         "<<endl;
					cout<<"5 moneta 2 euro         "<<endl;
					cout<<"------------------------"<<endl;
					cout<<endl;
					cin>>valuta;
					
					switch(valuta){
						
						case 1:
							
							importoTotale+=0.5;
						break;
						
						case 2:	
							
							importoTotale+=0.10;
							
						break;	
						
						case 3:
							
							importoTotale+=0.50;
							
						break;
						
						case 4:
							
							importoTotale+=1.00;
						break;
						
						case 5:
						
							importoTotale+=2.00;
						break;		
					}
					
					
					cout<<"Importo: "<<importoTotale<<" euro"<<endl;
					
					cout<<"Devi Inserire altre monete 1(si)|0(no)"<<endl;
					cin>>scelta;
					
					system("CLS");
					
			}while(scelta);
			
				return importoTotale;
		}
		
};

#include<iostream>
#include<string>
using namespace std;

class Prodotto{
	
	private:
		
		string nome;
		int codice;
		double prezzo;
		int quantita;
	public:
	
		Prodotto(){
			
		}
	
		Prodotto(string nome,int codice,double prezzo,int quantita){
			
			this->nome=nome;
			this->codice=codice;
			this->prezzo=prezzo;
			this->quantita=quantita;
		}	
		
		void setNome(string nuovo_nome){
			
			nome=nuovo_nome;
			
		}
		void setCodice(int nuovo_codice){
			
			codice=nuovo_codice;
		}
		void setPrezzo(double nuovo_prezzo){
			
			prezzo=nuovo_prezzo;
		}
		
		void setQuantita(int nuova_quantita){
			
			quantita=nuova_quantita;
		}
		
		int getQuantita(){
			
			return quantita;
		}
		
		
		string getNome(){
			
			return nome;
		}
		
		int getCodice(){
			
			return codice;
		}
		
		double getPrezzo(){
			
			return prezzo;
			
		}
		
		
		void stampa(){
			
			cout<<"Nome Prodotto: "<<nome<<endl;
			cout<<"Codice Prodotto: "<<codice<<endl;
			cout<<"Prezzo Prodotto: "<<prezzo<<" euro"<<endl;
			
		}
	
};

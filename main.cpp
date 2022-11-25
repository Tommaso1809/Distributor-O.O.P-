#include <iostream>
#include<cstdlib>
using namespace std;

#include"Distributore.h"

int main() {
	
	int codice;
	bool scl;
	float resto,importo;
	
	Distributore distributore;
	
	cout<<"-----DISTRIBUTORE AUTOMATICO-----"<<endl;
	Prodotto p1("Acqua Minerale",45,0.50,1);
	Prodotto p2("Kinder Bueno",55,1.50,2);
	Prodotto p3("Pepsi",20,1.80,20);
	Prodotto p4("Acqua Frizzante",48,0.70,8);
	Prodotto p5("Patatine Al Pomodoro",50,1.10,9);
	Prodotto p6("TUC",14,0.90,25);
	Prodotto p7("Milka",17,1.70,17);
	Prodotto p8("Tramezzino",34,1.00,3);
	Prodotto p9("Kinder Maxi",25,2.00,8);
	Prodotto p10("Croccantelle al Bacon",12,1.50,9);

	
	distributore.addProdotto(p1);
	distributore.addProdotto(p2);
	distributore.addProdotto(p3);
	distributore.addProdotto(p4);
	distributore.addProdotto(p5);
	distributore.addProdotto(p6);
	distributore.addProdotto(p7);
	distributore.addProdotto(p8);
	distributore.addProdotto(p9);
	distributore.addProdotto(p10);
	
	
	
	
	do{
		
			distributore.stampaProdotti();
			cout<<"---------------------------------"<<endl;
			cout<<endl;
			
			
			cout<<"Inserire il codice"<<endl;
			cin>>codice;
			
			importo=distributore.inserireMoneta();
			
			resto=distributore.acquistaProdotto(codice,importo);
			
			cout<<"Il resto e': "<<resto<<" euro"<<endl;
				
			cout<<"Vuoi spegnere la macchina 1(no)|0(si)"<<endl;
			cin>>scl;
			
			system("CLS");
		
	}while(scl);
	
	
	
	
  return 0;
}

#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main(){
	int qdteA=0,qdteE=0, qdteI=0, qdteO=0, qdteU=0, qdteT=0, x=0;
	char nome[50];
	
	cout<<"Digite um nome: ";
	cin.getline(nome,50);
	
	for(x=0;x<50;x++){
		if(toupper(nome[x])== 'A'){
			qdteA++;
			qdteT++;
			cout<<" posicao de A: "<<x+1<<"\n";
			
		}
			if(toupper(nome[x])== 'E'){
			
			qdteE++;
			qdteT++;
			cout<<" posicao de E: "<<x+1<<"\n";
			
		}
			if(toupper(nome[x])=='I'){
			
			qdteI++;
			qdteT++;
			cout<<" posicao de I: "<<x+1<<"\n";
			
		}
			if(toupper(nome[x])== 'O'){
			
			qdteO++;
			qdteT++;
			cout<<" posicao de O: "<<x+1<<"\n";
			
		}
			if(toupper(nome[x])== 'U'){
			
			qdteU++;
			qdteT++;
			cout<<" posicao de U: "<<x+1<<"\n";
			
		}
		
		
	}
		cout<<"A quantidade de vogal A: "<<qdteA << "\n";
		cout<<"A quantidade de vogal E: "<<qdteE << "\n";
		cout<<"A quantidade de vogal I:"<<qdteI << "\n";
		cout<<"A quantidade de vogal O: "<<qdteO << "\n";
		cout<<"A quantidade de vogal U: "<<qdteU << "\n";
}


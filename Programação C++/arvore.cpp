#include <iostream>
#include <stdlib.h>

using namespace std;

#define tamanho 100
#define e -1
#define d 1
#define r 0

struct str_no {
	
	char dado;
	int esquerda;
	int direita;
	int pai;
};

struct str_no arvore[tamanho];
int lado, indice=0;
int opt= -1;
int pai, no;

void arvore_insere(int pai, char dado, int lado);
int arvore_procura ( char dado );

void menu_mostrar(void);

int main(void){
	
	int temp;
	
	do{
		menu_mostrar();
		cin>> opt;
		switch (opt){
			case 1:
				cout<<"\nDigite o valor do pai: ";
				cin>> pai;
				fflush(stdin);
				
				
				cout<<"\nDigite o valor do NO: ";
				cin>> no;
				fflush(stdin);				
				
				cout<<"\nDigite o lado da subarvore \n"<<e<<d<<r;
				cin>> lado;
				fflush(stdin);
				
				temp = arvore_procura(pai);
				arvore_insere(temp,no , lado);
				break;
				
				case 2:
					
					cout<<"Digite o valor do NO:";
					cin>>no;
					fflush(stdin);
					
					
					temp = arvore_procura(no);
					cout<<"\nno filho esquerda:\n ";arvore[arvore[temp].esquerda].dado ;"\nfilho direita: \n";arvore[arvore[temp].direita].dado, arvore[temp].dado;
					
						system("pause"); 
						break; 
						}
					} while (opt !=0);
					system("pause");
					return(0);
				}
					void arvore_insere(int pai, char dado, int lado){
						switch (lado){
							
							case e:
								arvore[pai].esquerda = indice;
								arvore[indice].dado = dado;
								arvore[indice].pai = pai;
								arvore[indice].esquerda = -1;
								arvore[indice].direita = -1;
								indice ++;
								break;
								
							case d:
								
								arvore[pai].direita = indice;
								arvore[indice].dado = dado;
								arvore[indice].pai = pai;
								arvore[indice].esquerda = 1;
								arvore[indice].direita = 1;
								indice++;
								break;
								
							case r:	
							
								
								arvore[indice].dado = dado;
								arvore[indice].pai = 0;
								arvore[indice].esquerda = 0;
								arvore[indice].direita = 0;
								indice++;
								break;}
							}
							
							int arvore_procura(char dado){
								
								if(indice !=0){
									for(int i = 0; i<indice; i++){
										if(arvore[i].dado == dado){
											return(i); }
										}
									}
										else {
											return(0);
											}
										}
										
										void menu_mostrar(void){
											system("cls");
											for(int i =0 ; i< indice; i++){
												cout<< " ",arvore[i].dado;
									}
							
					cout<< "\n1 - Inserir um NO na arvore\n";
					cout<< "\n2 - Pesquisar um NO na arvore\n";
					cout<< "\n0 - Sair...\n\n";
	}


										
										
									
								
							
								
								
						
					
				
			
		
	


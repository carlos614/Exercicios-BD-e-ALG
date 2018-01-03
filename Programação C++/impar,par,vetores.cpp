#include <iostream>
 using namespace std;

 #define DIM 3

 main()
 {
 int vetor1[DIM], vetor2[DIM], i, somaPar, somaImpar;

 for(i = 0; i < DIM; i++)
 {
 cout <<"Digite um elemento: ";
 cin >> vetor1[i];
 }
 for(i = 0; i < DIM; i++)
 {
 cout <<"Digite outro elemento: ";
 cin >> vetor2[i];
 }
 for(i = 0; i < DIM; i++)
 {
 if(vetor1[i] % 2 == 0)
 {
 somaPar += vetor1[i];
 }
 if(vetor2[i] % 2 != 0)
 {
 somaImpar += vetor2[i];
 }
 }
 cout <<"Pares: " << somaPar << endl;
 cout <<"Impares: " << somaImpar << endl;

 return 0;
 }


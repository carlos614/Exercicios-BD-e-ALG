#include <iostream>

#include <fstream>

using namespace std;


int main(){

ofstream escreve;

escreve<<"Escrevendo no arquivo o conteudo : " << 100;

escreve.open("test alg.txt");

int matriz[3] = {52, 57, 59};

escreve<<"Podemos tambem escrever matrizes!";

for (int i=0; i < 3; i++){

escreve.width(6);

escreve<<matriz[i]<<" "<<"\n";

}


escreve.close();

system("PAUSE");


return 0;

}

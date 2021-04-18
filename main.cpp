#include <iostream>
#include <string>

using namespace std;

int main() {
int primeiro=1;
int Segundo=2;
int Terceiro=3;
int Quarto=4;
int Quinto=5;
int Sexto=6;
int Sétimo=7;
int Oitavo=8;
char vet[]={‘a’,’b’,’c’};
string X;

Cout << “Digite a palavra X com letras minúsculas com no máximo 50 caracteres” << endl;
getline (cin, X);

if (X.lenght() < 50) 
{
cout <<”A palavra escrita foi:” << X << endl;
for (int i=0; i< X.size(); i++) {
  for(int j=0; j<3; j++){
    if(vet[j]==X[i]){
      cout <<"#2="<< cont1 <<endl;
      break;
    }
    cont1=cont1+1;
  }
  cont1=cont1+1;
}
cont1=1;
for (int k=0; k<3;k++){
  if(vet==P[i]){
    cout <<"#1=" << count2 << endl;
    brek;
  }
  
}
}
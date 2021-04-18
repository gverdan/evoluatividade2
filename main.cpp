#include <iostream>
#include <string>

using namespace std;

int main() {
int primeiro=1;
int Segundo=1;
int Terceiro=1;
int Quarto=1;
int Quinto=1;
int Sexto=1;
int Sétimo=1;
int Oitavo=1;
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
    primeiro=primeiro+1;
  }
  primeiro=primeiro+1;
}
primeiro=1;
for (int k=0; k<3;k++){
  if(vet==P[i]){
    cout <<"#1=" << segundo << endl;
    brek;
  }

}
}
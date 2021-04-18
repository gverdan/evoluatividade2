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
char vet1[]={'a','b','c'};
char vet2[]={'d','e','f'};
char vet3[]={'g','h','i'};
char vet4[]={'j','k','l'};
char vet5[]={'m','n','o'};
char vet6[]={'p','q','r','s'};
char vet7[]={'t','u','v'};
char vet8[]={'w','x','y','z'};
string X;

Cout << “Digite a palavra X com letras minúsculas com no máximo 50 caracteres” << endl;
getline (cin, X);

if (X.lenght() < 50) 
{
cout <<”A palavra escrita foi:” << X << endl;
for (int i=0;i<X.size();i++){
  for(int j=0;j<3;j++){
    if(vet1[j]==X[i]){
      cout <<"#1="<< primeiro <<endl;
      break;
    }
  primeiro=primeiro+1;
}
primeiro=1;
for (int k=0; k<3;k++){
  if(vet2[k]==P[i]){
    cout <<"#2=" << segundo << endl;
    brek;
  }

}
}
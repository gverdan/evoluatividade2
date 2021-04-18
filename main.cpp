#include <iostream>
#include <string>

using namespace std;

int main() {
int primeiro=1;
int segundo=1;
int terceiro=1;
int quarto=1;
int quinto=1;
int sexto=1;
int setimo=1;
int oitavo=1;

char vet1[]={'a','b','c'};
char vet2[]={'d','e','f'};
char vet3[]={'g','h','i'};
char vet4[]={'j','k','l'};
char vet5[]={'m','n','o'};
char vet6[]={'p','q','r','s'};
char vet7[]={'t','u','v'};
char vet8[]={'w','x','y','z'};
string X;
string Y;
cout <<"Digite a palavra X com letras minusculas com no maximo 50 caracteres"<<endl;
getline(cin,X);

if (X.length()<50) {

cout <<"A palavra escrita foi: "<< X << endl; 

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
  if(vet2[k]==X[i]){
    cout <<"#2=" << segundo << endl;
    break;
  }
segundo=segundo+1;
}
segundo=1;
for (int k=0; k<3;k++){
  if(vet3[k]==X[i]){
    cout <<"#3=" << terceiro << endl;
    break;
  }
  terceiro=terceiro+1;
}
terceiro=1;
for (int k=0; k<3;k++){
  if(vet4[k]==X[i]){
    cout <<"#4=" << quarto << endl;
    break;
  }
  quarto=quarto+1;
}
quarto=1;
for (int k=0; k<3;k++){
  if(vet5[k]==X[i]){
    cout <<"#5=" << quinto << endl;
    break;
  }
  quinto=quinto+1;
}
quinto=1;
for (int k=0; k<3;k++){
  if(vet6[k]==X[i]){
    cout <<"#6=" << sexto << endl;
    break;
  }
  sexto=sexto+1;
}
sexto=1;
for (int k=0; k<3;k++){
  if(vet7[k]==X[i]){
    cout <<"#7=" << setimo << endl;
    break;
  }
  setimo=setimo+1;
}
setimo=1;
for (int k=0; k<3;k++){
  if(vet8[k]==X[i]){
    cout <<"#8=" << oitavo << endl;
    break;
  }
  oitavo=oitavo+1;
}
oitavo=1;
}
cout << "Reinicie para continuar jogando." << endl;
}
else 
cout <<"Volte ao inicio a palavra tem mais de 50 carecteres" << endl;
return 0;
}

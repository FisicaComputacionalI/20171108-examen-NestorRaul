//Imprime los numeros que no tienen multiplos de 3 antes del numero cinco
#include<iostream>
using namespace std;

int main(){
 int X;
 cout<<"Ingresa un numero, de preferencia menor a 5 o el programa no hace nada interesante"<<endl;
 cin>>X;
 while (X<=5){
 if(X%3==0);
 else cout<<X<<endl;
 X=X+2;
 }
 return 0;
}

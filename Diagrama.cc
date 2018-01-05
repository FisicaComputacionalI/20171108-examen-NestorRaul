//Imprime los numeros que no tienen multiplos de 3 antes del numero cinco
//De hecho el diagrama empieza asignando el valor 1 a X de tal forma que no se debería pedir al usuario el valor inicial.
#include<iostream>
using namespace std;

int main(){
 int X=1;
 //Comentando estas líneas y dando el valor inicial de 1 a X tu progrma realiza lo que se espera del diagrama. 
 // cout<<"Ingresa un numero, de preferencia menor a 5 o el programa no hace nada interesante"<<endl;
 //cin>>X;
 while (X<=5){
 if(X%3==0);
 else cout<<X<<endl;
 X=X+2;
 }
 return 0;
}

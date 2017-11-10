//Mancilla Xinto Nestor Raul
//EL valor que da con mi fecha de nacimiento que es el 21 de junio es P=21
//El valor que da con mi edad que es 20 es P=20
#include <iostream>
using namespace std;

 int isPrime(int X){
  int flag=0;
  
  for(int i=2; i<=(X/2); i++){
   if(X%i==0){
    flag=1;
    break;
    }
   }
  return flag;

}
//fin de la primera parte
int main(){
 int S=12;
 int P=0;
 int flag=0;
 
 cout<<"Dame un numero entero"<<endl;
 cin>>P;

 while(S!=0){
  cout<<"Ciclo S!=0, S"<<S<<",P"<<P<<endl;
  while(P<S){
   cout<<"Ciclo P<S, S"<<S<<",P"<<P<<endl;
//parece que aqui falta una llave

  while(isPrime(P)==1){
   cout<<"Ciclo isPrime, S"<<S<<",P"<<P<<endl;
   cout<<P<<"no es primo"<<endl;
   if((P%2)==0)
    P=P+1;
   P=P+2;
   cout<<"Final ciclo isPrime, S"<<S<<",P"<<P<<endl;
  }

  S=S-P;
  P=P+2;
  cout<<"Final ciclo P>S, S"<<S<<",P"<<P<<endl;
  }
  S=S-1;
  cout<<"Final ciclo S!=0, S"<<S<<",P"<<P<<endl;
  }
  cout<<"El valor de P es"<<P<<endl;
 return 0;
}

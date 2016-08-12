#include <iostream>
using namespace std;
int main(){
    int n;
    //ingresaremos un numero y el programa nos dira si es menor que 100 y un numero positivo o negativo. utilisamos if para esto
    cout<<"Ingresa un numero"<<endl;
    cin>>n;
    if(n<100){
     cout<<"El numero "<<n<<" es menor que 100";
          // usaremos if aqui para saber si es negativo o positivo
          if(n>0){
              cout<<"\n" <<n<<" es positivo";
          }else{
          cout <<"\n"<<n<<" es negativo";
          }
          }else{
          cout<<"El numero "<<n<<" es mayor que 100  ";

      }
      }






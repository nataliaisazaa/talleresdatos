#include <iostream>

using namespace std;

int main()
{
   int n;
    cout<<"Ingresa un numero"<<endl;
    cin>>n;
     if(n==0){
      cout<<"El numero "<<n<<" es neutro";
      } else{
          if(n>0){
              cout<<"El numero "<<n<<" es positivo";
          }else{
          cout<<"El numero "<<n<<" es negativo";
          }
      }
return 0;
}

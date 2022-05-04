#include<iostream>
using namespace std;

int main(void){
  double a,b,c,d,e,f,n, resultado1=0,resultado2 =0, resultado3 =0;
  cout<<"\n Copyright Laura Caviedes\nEn este codigo se realizaran varias expresiones.\nLa primera expresion es la siguiente (a/b)+1 y para todas devuelve un digito con n cifras decimales"<<endl;

  cout<<"\nDigite cuantas cifras decimales quiere: "; cin>>n;
  cout<<"Digite el valor de a: "; cin>>a;
  cout<<"Digite el valor de b: "; cin>>b;
  cout<<"\nDigite el valor de c; "; cin>>c;
  cout<<"Digite el valor de d; "; cin>>d;

  cout.precision(n+1);
  
  resultado1 = (a/b)+1;
  resultado2 = (a+b)/(c+d);
  double r1 = 8/7;
  double r2 = 5/4;

  cout<<"\nEl resultado es "<<resultado1<<endl;
  cout<<"\n La segunda expresion es (a+b)/(c+d) asi que necesitamos los valores de c y d"<<endl;
  cout<<"\nEl resultado es "<<resultado2<<endl;


}

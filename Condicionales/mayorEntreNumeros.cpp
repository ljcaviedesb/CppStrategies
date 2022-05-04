#include<iostream>
using namespace std;
int main (void){
  float a,b,c;
  char coma = ',';
  cout<<"Este programa identifica el número mayor entre tres números. \nDigite dos números separados por una coma"<<endl;
  cin>>a>>coma>>b>>coma>>c;
  if (a>=b && a>=c){
     cout<<a<<" es el mayor "<<endl;}
  else if(b>=a && b>=c){
    cout<<" EL mayor es "<<b<<endl;}
  else {
    cout<<"El mayor es "<<c<<endl;}

  return 0;
}

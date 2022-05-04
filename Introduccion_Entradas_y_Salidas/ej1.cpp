#include <iostream>
using namespace std;

int main(){
  double n1, n2;
  char coma = ',';
  cout<<"Este es un probrama que calcula la suma,diferencia, razon y multiplicacion de dos numeros\n"<<"Por favor digite dos numeros diferentes de cero para hacer el calculo separados por una coma"<<endl;
  cin>>n1>>coma>>n2;
  double suma = n1+n2;
  double multiplicacion = n1*n2;
  double resta1;
  double resta2;
  double d01;
  double d1;
  double dm01;
  double dm1;
  cout<<"suma = "<<suma<<endl;

  if(n1>n2){
    resta1=n1-n2;
    cout<<"diferencia "<< resta1 <<endl;
  }
  else {
    resta2=n2-n1;
    cout<<"diferencia = "<< resta2 <<endl;
  }
  
  cout<<"multiplicacion "<< multiplicacion <<endl;    
  
  if(abs(n1)<abs(n2)){
    d1 = abs(n2/n1);
    d01 = abs(n1/n2);
    cout<<"razon mayor = "<<d1<<" y razon menor = "<<dm01<<endl;
  }
  else if (abs(n2)<abs(n1)){
    dm01 = abs(n2/n1);
    dm1 = abs(n1/n2);
    cout<<"razon mayor = "<<dm1<<" y razon menor = "<<dm01<<endl;
  }
     
  return 0;
}

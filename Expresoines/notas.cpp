#include<iostream>
using namespace std;

int main (void){
  float nota1, nota2, nota3, promedio,porcentaje1, porcentaje2, porcentaje3;
  char coma = ',';
  cout<<"Digite la primera nota y separado de una coma el porcentaje de esta nota: "; cin>>nota1>>coma>>porcentaje1;
  cout<<"Digite la segunda nota y separado de una coma el porcentaje de esta nota: "; cin>>nota2>>coma>>porcentaje2;
  cout<<"Digite la tercera nota y separado de una coma el porcentaje de esta nota: "; cin>>nota3>>coma>>porcentaje3;

  if(porcentaje1 + porcentaje2 +porcentaje3 ==1){
    promedio = nota1*porcentaje1 + nota2*porcentaje2 + nota3*porcentaje3;
    cout.precision(2);
    cout<<"La nota promedio es "<<promedio<<endl;}
  else cout<<"Los porcentajes deben valer 1 "<<endl;

  return 0;

}

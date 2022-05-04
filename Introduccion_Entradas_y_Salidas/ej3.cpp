#include <iostream>
using namespace std;
int main (void){
  cout<<"En este programa solo se toman unos datos y se muestran en pantalla. \n Necesitamos la edad,el mes de cumpleagnos (1,2,3, ...,12), el sexo (F o M) y la altura en metros. \nPara ello le pedimos digite estos tres datos como el siguiente ejemplo:\n\n Edad:  5 \n Sexo:  F \n altura:  0.30"<<endl;
  int edad;
  char sexo;
  double altura;
  int mes;
  cout<<"\n Edad: ";
  cin>>edad;
  cout<<" mes de nacimiento: ";
  cin>>mes;
  cout<<" Sexo: ";
  cin>>sexo;
  cout<<" Altura: ";
  cin>>altura;
  int year = 2021;
  int born = year - edad;
  int month = 4; // Mes del agno en que nos encontramos

  if (sexo=='F' || sexo=='f'){
    if (mes <= month){
      cout<<"\n\nUsted es una mujer que nacio en el agno "<<born<<" y mide "<<altura<<" metros."<<endl;
    }
    else if (mes>month){
       cout<<"Usted es una mujer que nacio en el agno "<<born-1<<" y mide "<<altura<<" metros."<<endl;
    } 
  }
  if (sexo=='M' || sexo=='m'){
    if (mes <= month){
      cout<<"Usted es un hombre que nacio en el agno "<<born<<" y mide "<<altura<<" metros."<<endl;}
    else if (mes>month){
      cout<<"Usted es un hombre que nacio en el agno "<<born-1<<" y mide "<<altura<<" metros."<<endl;}
  }

}

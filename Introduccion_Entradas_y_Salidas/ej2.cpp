#include <iostream>
using namespace std;
int main (void){
  cout << "Los productos en Colombia los pueden publicar con iva o sin iva, sin embargo para cualquier caso se tiene que pagar el iva.\n En Colombia este impuesto es el 19\% del producto./n Asi que con este sencillo programa vamos a calcular el valor real del producto (sin iva) o el valor del producto con iva segun nos pida usted.\n\n Por favor escriba la letra 's' o 'c' si el precio lo esta dando sin o con iva y seguido de una coma escriba el valor del producto \n\n Por ejemplo \n s,50000\n"<< endl;
  char rta;
  char coma = ',';
  int precio;
  float iva = 1.19;
  cin>>rta>>coma>>precio;

  if(rta=='s'){
    int wo= precio*iva;
    cout<<"El precio del producto sin iva es "<<precio<<" y con iva es "<<wo<<endl;

  }
  else if (rta=='c'){
    int w = precio/iva;
    cout<<"\nEl precio del producto sin iva es "<<w<<" y con iva es "<<precio<<endl;
  }
		
}

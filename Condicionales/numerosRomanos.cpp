#include<iostream>

int main(){
  int numero, unidades, decenas, centenas, millar;
  std::cout<<"Digite un número: ";
  std::cin>>numero;
  int prueba;
  unidades = numero%10; numero /= 10;
  decenas = numero%10; numero /=10;
  centenas = numero%10;  numero /=10;
  millar = numero%10; numero /=10;

  switch(millar){
  case 1: cout<<"M"; break;
  case 2: cout<<"MM"; break;
  case 3: cout<<"MMM"; break;
  }

  switch(centenas){
      case 1: cout<<""; break;
      case 2: cout<<""; break;
      case 1: cout<<""; break;
      case 1: cout<<""; break;
      case 1: cout<<""; break;
      case 1: cout<<""; break;
			


  }
  
  return 0;
}
  

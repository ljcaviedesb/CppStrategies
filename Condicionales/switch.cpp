/*
  switch(expresion){
     case literal1:
         conjunto de instrucciones1;
	 break;
     case literal2:
         conjunto de instrucciones2;
	 break;
     case literaln:
         conjunto de instruccionesn;
	 break;
     default:
	 conjunto de instrucciones por defecto;
	 break;
    }
*/
#include<iostream>

int main (void){
  int numero;
  std::cout<<"Digite un número del 1 al 5: ";
  std::cin>>numero;

  switch(numero){
  case 1: std::cout<<"El numero es 1"<<std::endl; break;
  case 2: std::cout<<"El numero es 2"<<std::endl; break;
  case 3: std::cout<<"El numero es 3"<<std::endl; break;
  case 4: std::cout<<"El numero es 4"<<std::endl; break;
  case 5: std::cout<<"El numero es 5"<<std::endl; break;
  default: std::cout<<"EL numero no esta en el rango de 1-5"<<std::endl; break;
    

  }

  return 0;
}

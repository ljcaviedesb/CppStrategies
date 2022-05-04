#include <iostream>

int main (void){
  // Este código recibe un caracter e identifíca si este es una vocal mayúscula o minúscula
  char vocal;
  std::cout<<"Digite una vocal "; std::cin>>vocal;
  switch(vocal){
  case 'a': std::cout<<"La vocal "<<vocal<<" es minúscula."<<std::endl; break;
  case 'e': std::cout<<"La vocal "<<vocal<<" es minúscula."<<std::endl; break;
  case 'i': std::cout<<"La vocal "<<vocal<<" es minúscula."<<std::endl; break;
  case 'o': std::cout<<"La vocal "<<vocal<<" es minúscula."<<std::endl; break;
  case 'u': std::cout<<"La vocal "<<vocal<<" es minúscula."<<std::endl; break;
  case 'A': std::cout<<"La vocal "<<vocal<<" es mayúscula."<<std::endl; break;
  case 'E': std::cout<<"La vocal "<<vocal<<" es mayúscula."<<std::endl; break;
  case 'I': std::cout<<"La vocal "<<vocal<<" es mayúscula."<<std::endl; break;
  case 'O': std::cout<<"La vocal "<<vocal<<" es mayúscula."<<std::endl; break;
  case 'U': std::cout<<"La vocal "<<vocal<<" es mayúscula."<<std::endl; break;
  default: std::cout<<"No es una vocal"<<std::endl; break;
  }
  return 0;
}

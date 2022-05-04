#include <iostream>

int main (void){
  int n1, n2, n3, n4;
  char coma = ',';
  std::cout<<"Digite tres números separados por una coma "; std::cin>>n1>>coma>>n2>>coma>>n3;
  std::cout<<"\nAhora digite un cuarto número "; std::cin>>n4;
  int array[3] = {n1, n2, n3};
  if (array[0]== n4){
    std::cout<<"El último número coincide con el primer número."<<std::endl;}
  else if (array[1]==n4){
    std::cout<<"El último número coincide con el segundo número."<<std::endl;}
  else if (array[2]==n4){
    std::cout<<"El último número coincide con el tercer número."<<std::endl;}
  else {
    std::cout<<"El cuarto número no coincide con los anteriores"<<std::endl;}
  
  return 0;
}

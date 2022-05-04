#include<iostream>

int main(){
  int n;
  char coma = ',';
  std::cout<<"Digite un número: "; std::cin>>n;
  if(n%2 == 0){
    std::cout<<n<<" es par"<<std::endl;}
  else { std::cout<<n<<" es impar"<<std::endl;}

  return 0;
}

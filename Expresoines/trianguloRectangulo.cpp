#include<iostream>
#include<math.h>
int main (){
  char coma=',';
  float cateto1, cateto2, hipotenusa;

  std::cout<<"Escriba el valor de los catetos 1 y 2 separados por una coma"; std::cin>>cateto1>>coma>>cateto2;
  hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));
  std::cout<<"\nLa hipotenusa de este triángulo rectángulo vale: "<<hipotenusa<<std::endl;
  return 0;
}

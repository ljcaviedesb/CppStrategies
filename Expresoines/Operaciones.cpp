#include<iostream>
#include<math.h>

int main (void){
  char coma = ',';
  float x, y, z;
  std::cout<<" La primera función es función de dos variables x e y que toma la forma f(x,y) = sqrt(x)/(y^2 -1), digite el valor de los dos términos que quiere calcular separados por una coma 'x,y'"<<std::endl;
  std::cin>>x>>coma>>y;
  
  z = sqrt(x)/(pow(y,2)-1);

  std::cout<<"El valor de f("<<x<<coma<<y<<") = "<<z<<std::endl;



  return 0;
}

#include<iostream>
#include<math.h>

int main (void)
{
  float a,b,c,x1, x2;
  std::cout<<"Este programa da las soluciones de x, con x variable de una función de segundo orden de la forma ax^2 +bx +c = 0. Así que digite los siguientes valores;"<<std::endl;
  std::cout<<"a"; std::cin>>a;
  std::cout<<"\nb"; std::cin>>b;
  std::cout<<"\nc"; std::cin>>c;
  x1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
  x2 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);

  std::cout<<"Las raices de esta ecuación son:"<<std::endl;
  std::cout<<"x1 = "<<x1<<std::endl;
  std::cout<<"x2 = "<<x2<<std::endl;


  return 0;
}

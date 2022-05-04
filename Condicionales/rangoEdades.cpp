#include <iostream>

int main(void){
  // Este programa identifica si el rango de su edad esta entre los 18 años y los 25.
  int age;
  std::cout<<"Digite su edad "; std::cin>>age;
  if (10 <= age && age <=25){
    std::cout<<"Su rango de edad esta entre los 18 y 25 años"<<std::endl;
    return 0;
  }
  else{
    std::cout<<"Su rango de edad no esta entre los 18 y 25 años"<<std::endl;
    return 0;
  }

  return 0;
}

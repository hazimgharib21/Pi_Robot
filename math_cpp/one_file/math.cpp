#include <iostream>

int factorial(int a){

  if(a == 1)
    return 1;
  return a * factorial(a - 1);

}

int multiply(int a, int b){

  return a * b;

}

void print(){

  std::cout << "Hello" << std::endl;

}

int main(){

  std::cout << multiply(2, 3) << std::endl;
  std::cout << factorial(5) << std::endl;
  print();
  return 0;

}

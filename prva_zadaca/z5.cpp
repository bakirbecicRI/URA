#include <iostream>

  int multiply(int a){
  if (a==0) return 1;
  if (a%2==0)
    return a*multiply(a-1);
  else 
   return multiply(a-1);
  }

int main(){
  int a;
  std::cout<<"Unesi do kojeg broja se racuna proizvod: ";
  std::cin>>a;
  std::cout<<multiply(a)<<std::endl;

  return 0;
}

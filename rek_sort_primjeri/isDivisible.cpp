#include <iostream>

  bool isDivisible(int a, int b){
    if (a==0) return true;
    if (a<0) return false;
    return isDivisible(a-b,b);
  }


int main(){
  if (isDivisible(10,5)){
  std::cout<<"Brojevi su djeljivi bez ostatka"<<std::endl;
  }
  if (isDivisible(1,1)){
  std::cout<<"Brojevi su djeljivi bez ostatka"<<std::endl;
  }

  return 0;
}

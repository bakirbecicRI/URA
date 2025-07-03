#include <iostream>

int remainder(int a, int b){
  if (a<b) return a;  
  return remainder(a-b, b);
}

int main(){
  std::cout<<remainder(10,3)<<std::endl;
    
  return 0;
}

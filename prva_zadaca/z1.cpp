#include <iostream>

//divide

int divide (int a, int b){
  if (a<b) return 0;
  return 1+divide(a-b, b);
}
  
int main(){
  
  std::cout<<divide(18,6)<<std::endl;
   
  return 0;
}

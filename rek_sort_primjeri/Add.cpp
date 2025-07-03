#include <iostream>

int add(int a, int b){
  if (b==0) return a;
    return add(a^b,(a&b)<<1);

}


int main(){

  std::cout<<add(5,3)<<std::endl; 


  return  0;
}

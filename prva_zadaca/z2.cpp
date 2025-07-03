#include <iostream>

int fast_divide(int a, int b){
    if (a<b) return 0;

    int power=1;
    int temp=b;

    while (temp*2 <= a){
      temp *= 2;
      power *= 2;
    }
    
    return power + fast_divide(a-temp, b);
}

int main(){
  std::cout<<fast_divide(24,4)<<std::endl; 


  return 0;
}

#include <iostream>

int sumaCifara(int n){
  if (n==0) return 0;
  return n%10+sumaCifara(n/10);
}


int main(){
  std::cout<<sumaCifara(12345)<<std::endl;

  return 0;
}

#include <iostream>

int brojCifara(int n){
    if (n==0) return 0;
    return 1+brojCifara(n/10);
  }


int main(){

  std::cout<<brojCifara(987)<<std::endl;

  return 0;
}

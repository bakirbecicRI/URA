#include <iostream>

int proizvodCifara(int n){
    if (n==0) return 1;
    return n%10*proizvodCifara(n/10);

}


int main(){

  std::cout<<proizvodCifara(123)<<std::endl;


  return 0;
}

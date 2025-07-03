#include <iostream>

  int obrniBroj(int n){
    if (n==0) return 0;
    auto t=n;
    int pow=1;
    t=t/10;
    while (t!=0){
    pow *= 10;
    t=t/10;
    }
    return n%10*pow+obrniBroj(n/10);
  }

int main(){
  
  std::cout<<obrniBroj(1234)<<std::endl;

  return 0;
}

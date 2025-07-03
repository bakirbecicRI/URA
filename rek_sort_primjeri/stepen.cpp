#include <iostream>

int stepen(int a, int n){
    if (n--==0) return 1;
  return a*stepen(a,n);

}

int main(){
  std::cout<<stepen(5,3)<<std::endl;
  return 0;
}

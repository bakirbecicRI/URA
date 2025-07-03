#include <iostream>

int sum(const int* array, int n){
  if (n==0) return 0;
  return array[0]+sum(array+1,n-1);
}

int main(){
  int array[]={1,2,3};
  std::cout<<"Zbir elemenata: "<<sum(array,3)<<std::endl;

  return 0;
}

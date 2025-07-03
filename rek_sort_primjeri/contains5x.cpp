#include <iostream>

bool sadrziPeticu(int n){
  if (n==0) return false;
  if ((n%10)==5) {
    if ((n/10)%10==5){
        return true;
    }
  }
  return sadrziPeticu(n/10);
}



int main(){
  if (sadrziPeticu(15354)){
    std::cout<<"Sadrzi 2 uzastopne 5"<<std::endl;
  }
  else {
    std::cout<<"Ne sadrzi 2 uzastopne 5"<<std::endl;
  }


  return 0;
}

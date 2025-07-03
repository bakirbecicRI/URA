#include <iostream>
#include <vector>

bool push_unique(std::vector<int>& niz, int num){
    bool s=false;
    for (auto it=niz.begin(); it!=niz.end(); it++){
      if (*it==num){
        s=true;
      }
    }
    if (!s){
      std::cout<<"Element "<<num<<" nije bio u nizu"<<std::endl;
      niz.push_back(num);
      return true;
    }
    else if(s){
      std::cout<<"Element "<<num<<" je bio u nizu"<<std::endl;
      return false;
    }
   return 0; 

}


int main(){
  std::vector<int> vek={1,2,3,4,5};
  push_unique(vek,3);


  return 0;
}

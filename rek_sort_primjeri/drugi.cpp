#include <iostream>
#include <vector>

  template<typename forwardIT>
  bool is_array_sorted(forwardIT begin, forwardIT end){
    for (auto it=begin; it!=end;){
      auto next=it;
      ++next;
      if (next==end)
        break;
      
      if (*(it)>*next){
        return false;
      }
      ++it;
    }
    return true;
  }

int main(){

  std::vector<int> vek={1,2,3,4,5};
  std::vector<int> vek1={1,3,2,4,5};
  if (is_array_sorted(vek.begin(),vek.end()))
    std::cout<<"Niz vek je sortiran"<<std::endl;
   if (is_array_sorted(vek1.begin(),vek1.end()))
     std::cout<<"Niz vek1 je sortiran"<<std::endl;
  

  return 0;
}

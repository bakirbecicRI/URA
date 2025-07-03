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

  template<typename It, typename lambda>
  void selectionsort(It begin, It end, lambda p){
    for (auto i=begin; i!=end; i++){
      auto min=i;
      for (auto j=i; j!=end; j++){
          if (p(*j, *min))
            min=j;
      }
          std::swap(*i,*min);
    }

  }

int main(){

  std::vector<int> vek={1,2,3,4,5};
  std::vector<int> vek1={1,3,5,4,2};
  if (is_array_sorted(vek.begin(),vek.end()))
    std::cout<<"Niz vek je sortiran"<<std::endl;
   if (is_array_sorted(vek1.begin(),vek1.end()))
     std::cout<<"Niz vek1 je sortiran"<<std::endl;
   for (auto e:vek1)
     std::cout<<e<<" ";
   std::cout<<std::endl;
  selectionsort(vek1.begin(), vek1.end(), [](int a, int b){return a<b;});  
     if (is_array_sorted(vek1.begin(),vek1.end()))
     std::cout<<"Niz vek1 je sortiran"<<std::endl;
  for (auto e:vek1)
    std::cout<<e<<" ";
  return 0;
}

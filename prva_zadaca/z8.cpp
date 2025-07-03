#include <iostream>
#include <vector>


// 1 2 3 4
// temp=2
// 1 1 3 4
// 2 1 3 4
// temp=4
// 2 1 3 1
// 2 4 3 1
//
//

template<typename Iter, typename P>
Iter partition(Iter begin, Iter end, const P& p){
  Iter iterator=begin;
  for (auto it=begin; it!=end; it++){
    if (p(*it)){
      std::swap(*iterator,*it);
      ++iterator;
    }
  }
  return iterator;
}



int main(){
  std::vector<int> v={1,2,3,4};
  partition(v.begin(),v.end(),[](int elem){return elem%2==0;});
  for(auto i:v){
  std::cout<<i<<" ";
  }


  
  return 0;
}

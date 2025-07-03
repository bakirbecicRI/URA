#include <iostream>
#include <vector>

template<typename It, typename E>
It upper_bound(It begin, It end, E element){
  while (begin!=end){
    auto n=end-begin;
    auto mid=begin+n/2;
    if (*mid<=element)
      begin=mid+1;
    
    else
      end=mid;
  }
  return begin;

}

int main(){

  std::vector<int> v={2,4,6,8,10};
  auto it=upper_bound(v.begin(), v.end(), 5);
  v.insert(it,5);
  auto it1=upper_bound(v.begin(), v.end(), 27);
  v.insert(it1,27); 
  for (auto i:v){
    std::cout<<i<<" ";
  }



  return 0;
}

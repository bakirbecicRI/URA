#include <iostream>
#include <vector>

template <typename It, typename C>
void shellsort(It begin, It end, C comp){
 auto n=end-begin;
  for (auto increment=n/2; increment>=1; increment = increment / 2){
      for (auto j=0; j<increment; j++){
         insertionsort_var(begin+j,n-j,increment, comp); 
      }
  }
}
template <typename It, typename E, typename C> 
void insertionsort_var(It begin, E n, E increment, C comp){
  for (auto i=increment; i<n; i+=increment){
      for (auto j=i; j>=increment; j-=increment){
        if (comp(*(begin+j), *(begin+j-increment))){
          std::swap(*(begin+j), *(begin+j-increment));
            }
        else 
          break;
      }
  }
}

int main(){
  std::vector<int> sek{-3,-28,6,3,1};
  shellsort(sek.begin(),sek.end(),[](int a, int b){ return a<b;});
  for (auto& e:sek)
    std::cout<<e<<" ";
  std::cout<<std::endl;

  return 0;
}

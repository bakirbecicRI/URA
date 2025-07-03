#include <vector>
#include <iostream>

template<typename It, typename C>
void selectionsort(It begin, It end, C comp){
  for (It it=begin; it!=end; it++){
      It min_pos=it;
    for (auto it1=it; it1!=end; it1++){
        if (comp(*it1, *min_pos)){
          min_pos=it1;
        }
    }
      std::swap(*min_pos,*it);
  }
}

int main(){
  std::vector<int> sek={1,4,7,3,5};
  selectionsort(sek.begin(), sek.end(), [](int a, int b){ return a<b;});  
  for (auto &e: sek){
    std::cout<<e<<" ";
  }



  return 0;

}

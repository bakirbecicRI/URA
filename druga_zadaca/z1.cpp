#include <iostream>
#include <vector>


template<typename It, typename C>
void bubblesort(It begin, It end, C comp){
  for (It i=end; i!=begin; i--){
    for (It j=begin; std::next(j) != i; j++){
      It next = std::next(j);
      if (comp(*next, *j)) {
        std::swap(*next,*j);
      }
    }
  } 
}
//
// 1 3 4 6 7 2 5 
// size - 7
// 1 3 4 6 2 7 5
// 1 3 4 6 2 5 7
//
//
//
void bubblesort(int* arr, int n){
  for (int i=n; i>1; i--){
    // 7 j<7
    for (int j=1; j<i; j++){
      if (arr[j]<arr[j-1]){
        std::swap(arr[j],arr[j-1]);
      }
    }
  }

}


int main(){
  int arr[]={1,3,4,6,7,2,5};
  bubblesort(arr, 7);
  for (auto it=0; it<7; it++){
    std::cout<<arr[it]<<" ";
  }
  std::cout<<std::endl;
  std::vector<int> vek={1,3,4,6,7,2,5};
  bubblesort(vek.begin(), vek.end(), [](int a, int b){
      return a<b;});
  for (auto it=0; it<vek.size(); it++){
    std::cout<<vek[it]<<" ";
  }



  return 0;
}

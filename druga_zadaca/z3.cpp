#include <iostream>
#include <vector>


template <typename It, typename C>
void insertionsort(It begin, It end, C comp){
  for (It i=std::next(begin); i!=end; i++){
    for (It j=i; j!=begin && comp(*j, *(std::prev(j))); j--){
      std::swap(*j, *(std::prev(j)));
    }
  }

}

void insertionsort(int* arr, int n){
    for (int i=1; i<n; i++){
      for (int j=i; j>0 && arr[j]<arr[j-1]; j--){
              std::swap(arr[j], arr[j-1]);
      }
    }

}


int main(){
  int arr[]={2,4,7,1};
  insertionsort(arr, 4);
  for (auto i=0; i<4; i++){
    std::cout<<arr[i]<<" ";
  }
  std::cout<<std::endl;
  std::vector<int> sek={2,4,7,3,-36,43,8};
  insertionsort(sek.begin(),sek.end(),[](int a, int b){
      return a<b;
      });
  for (auto&e:sek)
    std::cout<<e<<" ";


  return 0;

}

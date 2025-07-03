#include <iostream>
#include <vector>


void sredi_nadole(std::vector<int>& vek, int k, int n){
    while (2*k+1<n){
      int j=2*k+1;
      if (j+1<n && vek[j]<vek[j+1]) ++j;
      if ((vek[k]<vek[j]))
      std::swap(vek[k],vek[j]);
      else 
        break;
      k=j;
    }
}

void heapsort(std::vector<int>& vek){
  int n=vek.size();
  for (int i=n/2-1; i>=0; i--){
      sredi_nadole(vek,i,n);
  }
  while (n>1){
    std::swap(vek[0],vek[n-1]);
    sredi_nadole(vek,0,--n);
}
}

int main(){

  std::vector<int> sekvenca{9,5,1,4,2,3,6};
  heapsort(sekvenca);
  for (auto& el: sekvenca){
    std::cout<<el<<" ";
  }
  std::cout<<std::endl;
  return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Tim{
  std::string naziv;
  int bodovi;
  int primljeniGolovi;
  int postignutiGolovi;
};


int main(){
  std::vector<Tim> timovi;
  auto kriterij4=[](Tim a, Tim b){return a.bodovi<b.bodovi;};
  auto kriterij3=[](Tim a, Tim b){return (a.postignutiGolovi-a.primljeniGolovi)>
    (b.postignutiGolovi-b.primljeniGolovi);};
  auto kriterij2=[](Tim a, Tim b){return a.postignutiGolovi>b.postignutiGolovi;};
  auto kriterij1=[](Tim a, Tim b){return a.naziv>b.naziv;};
  std::sort(timovi.begin(), timovi.end(), kriterij1);
  std::sort(timovi.begin(), timovi.end(), kriterij2);
  std::sort(timovi.begin(), timovi.end(), kriterij3);
  std::sort(timovi.begin(), timovi.end(), kriterij4);
  




  return 0;
}

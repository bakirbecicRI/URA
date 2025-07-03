#include <iostream>

bool palindrome(const char* s, int n){
    if (n<2) return 1;
    return s[0]==s[n-1]&&palindrome(s+1,n-2);

}

int main(){
  char niz[] = {"radar"};
  int n=5;
  if(palindrome(niz,n))
    std::cout<<"Palindrom"<<std::endl;
  else
    std::cout<<"Nije palindrom"<<std::endl;
   
  return 0;
}

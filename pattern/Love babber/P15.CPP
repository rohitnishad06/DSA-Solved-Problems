//    A
//    B B
//    C C C
// 'A'+i-1

#include<iostream>
using namespace std;
int main(){
  int n = 3;
  int i = 1;
  while( i <= n ){
    int j = 1;
    while( j <= i ){
      char count = 'A'+i-1;
      cout<<count;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
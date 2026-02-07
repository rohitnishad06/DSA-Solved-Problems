// A
// B  C
// D  E F
// G  H I J

#include<iostream>
using namespace std;
int main(){
  int n = 4;
  int i = 1;
  while( i <= n){
    int j = 1;
    while( j <= i ){
      char count = 'A' + i + j - 2;
      cout<<count;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
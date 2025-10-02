// D
// C  D
// B  C D
// A  B C D
// 'A' + n - i

#include<iostream>
using namespace std;
int main(){
  int n = 4;
  int i = 1;
  while( i <= n ){
    int j = 1;
    char value = 'A' + n - i;
    while( j <= i ){
      cout<<value;
      value++;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
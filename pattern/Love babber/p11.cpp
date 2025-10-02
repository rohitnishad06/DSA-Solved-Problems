//                A A A
//                B B B
//                C C C
// row change char change hote ja raha hai 

#include<iostream>
using namespace std;
int main(){
  int n = 3;
  int i = 1;
  while( i <= n ){
    int j = 1;
    while( j <= n ){
      char CH = 'A' + i - 1;        // a+i-1 
      cout<<CH;               
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
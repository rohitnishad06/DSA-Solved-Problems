//                A B C
//                A B C
//                A B C
// row change char change hote ja raha hai 

#include<iostream>
using namespace std;
int main(){
  int n = 3;
  int i = 1;
  while( i <= n ){
    int j = 1;
    while( j <= n ){
      char CH = 'A' + j - 1;        // a+j-1 
      cout<<CH;               
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
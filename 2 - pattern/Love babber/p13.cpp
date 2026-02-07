//          A B C
//          D E F
//          G H I
// jitni baar loop chalna hai uss CHAR ko hi print karn HAI 

#include<iostream>
using namespace std;
int main(){
  int n=3;
  char count = 'A';
  int i = 1;
  while( i <= n){
    int j = 1;
    while( j <= n){
      cout<<count;
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
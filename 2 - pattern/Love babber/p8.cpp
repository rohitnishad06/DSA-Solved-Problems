//               1
//               2 3
//               4 5 6
//               7 8 9 10

//  jitni baar loop chalna hai uss number ko hi print kaarna hai

#include<iostream>
using namespace std;
int main(){
  int n;
  int count = 1;
  cin>>n;
  int i = 1;
  while( i <= n ){
    int j =1;
    while( j <= i ){        // jitni number hai utne number ki row                                           
      cout<<count;
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
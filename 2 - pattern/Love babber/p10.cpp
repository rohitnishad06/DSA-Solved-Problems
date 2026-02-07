//             1
//             2 1
//             3 2 1
//             4 3 2 1

//like p4 
//isme stating row ki vaue pe depend kar rahi hai 

#include<iostream>
using namespace std;
int main(){
  int n=4;
  int i = 1;
  while( i <= n ){
    int j=1;
    while( j <= i ){
      cout<<i-j+1;          // i-j+1
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
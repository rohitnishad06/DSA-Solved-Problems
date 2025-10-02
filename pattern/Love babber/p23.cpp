//          			1
//          		2	2
//          	3	3	3
//          4	4	4	4

#include<iostream>
using namespace std;
int main(){

  int n = 4;
  int i = 1;

  //outer loop
  while( i <= n ){

    // space printing
    int space = n - i;
    while(space){
      cout<<" ";
      space--;
    }
    
    // inner loop
    int j = 1;
    while( j <= i ){
      cout<<i;
      j++;
    }

    cout<<endl;
    i++;
  }

  return 0;
}
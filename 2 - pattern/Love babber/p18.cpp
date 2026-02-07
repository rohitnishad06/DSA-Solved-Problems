//    _ _ _ *
//    _ _ * *
//    _ * * *
//    * * * *

#include<iostream>
using namespace std;
int main(){

  int n = 4;
  int i = 1;

  while( i <= n ){

    // space printing
    int space = n - i;
    while(space){
      cout<<" ";
      space--;
    }

    // * printing
    int j = 1;
    while( j <=  i ){
      cout<<"*";
      j++;
    } 
    
    cout<<endl;
    i++;
  }
  return 0;
}
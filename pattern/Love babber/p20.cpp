// ****
//  ***
//   **
//    *

#include<iostream>
using namespace std;
int main(){
  int n = 4;
  int i = 1;

  while( i <= n ){

    //space printing
    int space = i-1;
    while(space){
      cout<<" ";
      space--;
    }

    //* priting
    int j = 1;
    while( j <= n - i + 1 ){
      cout<<"*";
      j++;
    }

    cout<<endl;
    i++;
  }

  return 0;
}
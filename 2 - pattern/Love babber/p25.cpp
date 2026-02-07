//                1
//              1 2 1
//            1 2 3 2 1
//          1 2 3 4 3 2 1

#include<iostream>
using namespace std;
int main(){

  int n = 4;
  int i = 1;

  while( i <= n ){
    
    // space printing (1st triangle)
    int space = n-i;
    while( space ){
      cout<<" ";
      space--;
    }

// 2nd triangle               
//                1
//              1 2 
//            1 2 3 
//          1 2 3 4 

    int j = 1;
    int num1 = 1;
    while( j <= i ){
      cout<<num1;
      num1++;
      j++;
    }

//3rd tringle 
//               _ 
//               1
//               2 1
//               3 2 1

    int num2 = i-1;
    while( num2 ){
      cout<<num2;
      num2--;
      
    }

    cout<<endl;
    i++;
  }

  return 0;
}
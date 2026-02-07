//    1 2 3 4 5 5 4 3 2 1
//    1 2 3 4 * * 4 3 2 1
//    1 2 3 * * * * 3 2 1
//    1 2 * * * * * * 2 1
//    1 * * * * * * * * 1

#include<iostream>
using namespace std;
int main(){

  int n = 5;
  int i = 1;

  while( i <= n ) {

    //  1st triangle
    //    1 2 3 4 5 
    //    1 2 3 4 
    //    1 2 3 
    //    1 2 
    //    1 

    int first = n - i + 1;
    int num1 = 1;
    while(first){          
      cout<<num1;
      num1++;
      first--;
    }

    // 2nd triangle
    //            _
    //            *
    //          * *
    //        * * *
    //    _ * * * *

    int star1 = i-1;
    while(star1){            
      cout<<"*";
      star1--;
    }

    // 3rd triangle
    //    _ 
    //    * 
    //    * * 
    //    * * * 
    //    * * * * _
    int star2 = i - 1;
    while(star2){           
      cout<<"*";
      star2--;
    }

    // 4th triangle 
    //    5 4 3 2 1
    //      4 3 2 1
    //        3 2 1
    //          2 1
    //            1

    int first2 = n - i + 1;
    int j = 1;
    while( j <= n - i + 1 ){          
      cout<<first2;
      first2--;
     j++;
    }

    cout<<endl;
    i++;
  }
  return 0;
}
//          1	2	3	4
//          	2	3	4
//          		3	4
//          			4

#include<iostream>
using namespace std;
int main(){

  int n = 4;
  int i = 1;

  // outer loop
   while ( i <= n ){

    // space printing
    int space = i - 1;
    while(space){
      cout<<" ";
      space--;
    }

    // inner loop
    int j = 1;
    int num = i;
    while( j <= n - i + 1){
      cout<<num;
      num++;
      j++;
    }

    cout<<endl;
    i++;
   }

  return 0;
}
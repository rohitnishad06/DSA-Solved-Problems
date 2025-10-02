//7. reverse intger 
// given a signed 32 bit int x, return x with its digit reversed. if reversing x causes the value   to go outside the signed 32 bit intger range [ -2^31, 2^31 -1 ], then return 0;

#include<iostream>
using namespace std;
int main(){
  int n = 154;
  int ans = 0;
  while( n!=0 ){
    int digit = n%10;
    
    // if((ans>INT_MAX/10)||(ans>INT_MIN/10)){
    //   return 0;
    // }

    ans = (ans*10) + digit;
    n = n/10;
  }
  cout<< ans;
}
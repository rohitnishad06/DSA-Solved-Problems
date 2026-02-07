// Q :- sub the product and sum of the digit of an integer.
//  Given an integer number n, return the difference between the product of its digits and the sum of its digits.

#include<iostream>
using namespace std;
int main(){

  int n = 254;
  int pro = 1;
  int sum = 0;

  while( n!=0 ){
    int digit = n%10;
    sum = sum + digit;
    pro = pro * digit;
    n = n/10;
  }
  int ans = pro - sum;
  cout<<ans<<endl;
  return 0;
}
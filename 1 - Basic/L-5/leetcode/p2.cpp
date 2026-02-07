// Q:- number of 1 bit 
// Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

#include<iostream>
using namespace std;
int main(){

  int count = 0;
  int n =11;

  while(n!=0){

    if(n&1){
      count++;
    }
    n = n>>1;
  }
  cout<<count<<endl;

  return 0;
}
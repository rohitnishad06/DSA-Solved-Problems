// sum of first n number

// tc -> O(n)
// sc -> O(n)

#include<bits/stdc++.h>
using namespace  std;

int printNum(int n){
  if(n==0) return 0;
  return n + printNum(n-1);
}

int main(){

  int n;

  cout<<"Enter the Number"<<endl;
  cin>>n;

  cout<<"sum of first n number"<<endl;
  cout<<printNum(n);

  return 0;
}
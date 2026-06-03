// print in terms of n -> 1

// tc -> O(n)
// sc -> O(n)

#include<bits/stdc++.h>
using namespace  std;

void printNum(int i, int n){
  if(n<1) return;
  cout<<n<<endl;
  printNum(i,n-1);
}

int main(){

  int n;

  cout<<"Enter the Number"<<endl;
  cin>>n;

  cout<<"printing number n to 1"<<endl;
  printNum(1, n);

  return 0;
}
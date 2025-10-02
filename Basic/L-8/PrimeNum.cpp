#include<iostream>
using namespace std;

bool isPrime(int n){
  for(int i=2;i<=n;i++){
    if(n%2==0){
      return 0;
    }
  }
  return 1;
}

int main(){


  int number;
  cin>>number;
  if(isPrime(number)){
    cout<<number<<" Is a Prime Number"<<endl;
  }
  else{
    cout<<number<<" Not a Prime Number"<<endl;
  }

  return 0;
}
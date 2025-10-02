#include<iostream>
using namespace std;
int main(){

  int n = 56;
  
  for(int i = 2; i < n; i++){
    if(n%i == 0){
      cout<<" Not prime number"<<endl;
      break;
    }
    else {
      cout<<"Prime Number"<<endl;
      break;
    }
  }

  return 0;
}
#include<iostream>
using namespace std;
int main(){
  
  int a = 5;   // 101
  int b = 4;  //  100
                                     
  cout<<"a & b = "<<(a&b)<<endl;      //      100 = 4     
  cout<<"a | b = "<<(a|b)<<endl;      //      101 = 5
  cout<<"~a = "<<~a<<endl;            
  cout<<"a ^ b = "<<(a^b)<<endl;


  return 0;
}
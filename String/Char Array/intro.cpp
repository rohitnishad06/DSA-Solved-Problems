#include<bits/stdc++.h>
using namespace std;

int main(){

 // char arr[] = {'a','b','c','\0'};      //  \0 -> null char

  // char arr[] = "rohit";      //  String laterals

  // cout<<arr<<endl;            // constant pointer

  // cout<<arr[2]<<endl;            // access any specific letter

  // cout<<strlen(arr)<<endl;      // return length      
  
  
  char arr[100];

  cout<<"enter array char: ";

  cin.getline(arr, 100, '$');           // char store as a string till $ is not find. -> (rohit nishad$ rk  = rohit nishad)

  cout<<"Output : "<<arr<< endl;

  return 0;
}
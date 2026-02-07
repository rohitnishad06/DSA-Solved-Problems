// reverse the string 

#include<bits/stdc++.h>
using namespace std;

int getlength(char name[]){
  int count = 0;
  for(int i = 0; name[i] != '\0'; i++){
    count++;
  }
  return count;
}


int reverseString(char name[], int n){
  int s = 0;
  int e = n-1;
  while(s<e){
      swap(name[s++],name[e--]);
  }
}

int main(){

  char name[20];

  cout<<"Enter your name:";
  cin>> name ;

  cout<<"your name is : "<< name<<endl;

  int len = getlength(name);

  cout<<"Lenght:" <<len<<endl;

  reverseString(name, len);

  cout<<"your name is:" <<name;

  return 0;
}
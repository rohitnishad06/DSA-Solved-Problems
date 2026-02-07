// length of the char array (string)

#include<iostream>
using namespace std;

int getlength(char name[]){
  int count = 0;
  for(int i = 0; name[i] != '\0'; i++){
    count++;
  }
  return count;
}

int main(){

  char name[20];

  cout<<"Enter your name:";
  cin>> name ;

  cout<<"your name is : "<< name<<endl;

  cout<<"Lenght:" <<getlength(name);

  return 0;
}
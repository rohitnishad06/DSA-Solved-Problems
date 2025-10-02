//              1
//              2 3
//              3 4 5    
//              4 5 6 7
// jo number ki row haai ussi number se printing start karni hai 

#include<iostream>
using namespace std;
int main(){
  int n=4;
  int i=1;
  while( i <= n ){
    int j = 1;
    int count =i;    //3
    while( j <= i ){
      cout<<count;
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
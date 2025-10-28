// ctrl + shift + b => to run the probram 

#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& a, int N){
  
        int xor1 = 0 , xor2 = 0;
        for(int i = 0; i<N-1; i++){
            xor2 = xor2^a[i];
            xor1 = xor1^(i+1);
        }
        xor1 = xor1 ^ N;
        return xor1^xor2;
}

int main () {
  vector<int>arr = {1,2,4,5};
  int result = missingNumber(arr,5);
  cout<<"result is : "<<result<<endl;
  return 0;
}


// print 1 to n

// tc -> O(n)
// Sc -> O(n)

#include<bits/stdc++.h>
using namespace std;

void printNum(int i, int n){
  // Base case: stop when i exceeds n
  if(i > n) return; 
  
  cout <<i<<endl; 
  
  // Recursive call, incrementing i
  printNum(i + 1, n);
}

int main(){
  int n;
  cout << "Please enter a number: "; 
  cin >> n;

  cout << "\nPrinting the number " << n << " times:\n";
  printNum(1, n);

  return 0;
}
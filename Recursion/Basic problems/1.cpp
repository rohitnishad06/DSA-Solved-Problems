// print the name n times 

// tc -> O(n)
// Sc -> O(n)

#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n){
  // Base case: stop when i exceeds n
  if(i > n) return; 
  
  cout << "Rohit\n"; 
  
  // Recursive call, incrementing i
  printName(i + 1, n);
}

int main(){
  int n;
  cout << "Please enter a number: "; 
  cin >> n;

  cout << "\nPrinting the name " << n << " times:\n";
  printName(1, n);

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

// user defines data type
struct Node{
  int data;       // => stores data
  Node* next;     // => stores the pointer of the next memory location

  // constructor
  public:
  Node(int x){
    data = x;
    next = NULL;
  }

  // or

  // constructor
  public:
  Node(int data1, Node* next1){
    data = data1;
    next = next1;
  }

};

int main(){

  vector<int> arr;
  arr.push_back(10);  
  arr.push_back(20);
  arr.push_back(30);

  // Creating nodes dynamically
  Node* head = new Node(arr[0]);
  Node* t1 = new Node(arr[1]);
  Node* t2 = new Node(arr[2]);

  // Linking the nodes
  head -> next = t1;      // head stores t1 ptr
  t1 -> next = t2;        // t1 stores t2 pointers && t2 stores null 

  cout << "Value : " << head -> data << endl;     // 10
  cout << "Poiner Location : " << head -> next << endl;     // Print the pointer of the next ele

  cout << "Value : " << t1 -> data << endl;       // 20
  cout << "Poiner Location : " << t1 -> next << endl;     // Print the pointer of the next ele

  cout << "Value : " << t2 -> data << endl;       // 30
  cout << "Poiner Location : " << t2 -> next << endl;     // Print the pointer of the next ele


  return 0;
}
// reverse the array
// tc -> O(n)
// sc -> O(n)

#include<bits/stdc++.h>
using namespace std;

void revArray(int i, int arr[], int n){
    if(i >= n/2) return;

    swap(arr[i], arr[n-i-1]);
    revArray(i+1, arr, n);
}

int main(){

    int n = 5;
    int arr[n] = {1,2,3,4,5};

    cout<<"Original Array: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    revArray(0, arr, n);

    cout<<"\nReversed Array: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
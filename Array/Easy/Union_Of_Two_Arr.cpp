// #include<iostream>
// using namespace std;

// void sortedArr(int a[],int b[] ){
//   int n1 = a.size();
//   int n2 = b.size();
//   int i = 0;
//   int j = 0;
//   int unionArr[];
//   while(i<n1 && j<n2 ){
//     if(a[i] <= b[j]){
//       if(unionArr.size()== 0 || unionArr.back() != a[i]){
//         unionArr.push_back(a[i]);
//       }
//       i++;
//     }
//     else{
//       if(unionArr.size()== 0 || unionArr.back() != b[j]){
//         unionArr.push_back(b[j]);
//       }
//       j++;
//     }
//   }

//   while(j<n2){
//     if(unionArr.size()== 0 || unionArr.back() != b[j]){
//         unionArr.push_back(b[j]);
//     }
//     j++;
//   }

//   while(i<n1){
//     if(unionArr.size()== 0 || unionArr.back() != a[i]){
//         unionArr.push_back(a[i]);
//     }
//     i++;
//   }


// }

// int main(){

//   int a[] = {1,1,2,3,4,5};
//   int b[] = {2,3,4,4,5,6};

//   sortedArr(a,b);


//   return 0;
// }


#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArr(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> unionArr;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (unionArr.size() == 0 || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        } else {
            if (unionArr.size() == 0 || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n1) {
        if (unionArr.size() == 0 || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    while (j < n2) {
        if (unionArr.size() == 0 || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr;
}

int main() {
    int a_arr[] = {1, 1, 2, 3, 4, 5};
    int b_arr[] = {2, 3, 4, 4, 5, 6};
    vector<int> a(a_arr, a_arr + sizeof(a_arr) / sizeof(int));
    vector<int> b(b_arr, b_arr + sizeof(b_arr) / sizeof(int));

    vector<int> result = sortedArr(a, b);

    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

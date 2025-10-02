// *
// **
// ***
// ****
// *****
// ******
// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

void pattern(int n) {
    for (int i = 1; i < 2 * n; i++) {   // loop runs till 2*n - 1
        int star = i;
        if (i > n) star = 2 * n - i;    // adjust stars in decreasing half
        for (int j = 1; j <= star; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n = 6;   // peak stars
    pattern(n);
    return 0;
}

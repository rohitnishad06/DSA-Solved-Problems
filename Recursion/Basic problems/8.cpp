// find fibonacci Number 

class Solution {
public:
// using recursion
    int fib(int n) {
        if(n<=1) return n;
        return fib(n-1) + fib(n-2);
    }
};
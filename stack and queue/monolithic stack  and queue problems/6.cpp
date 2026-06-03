class Solution {
public:

    // find next smaller left side
    vector<int> getNSL(vector<int> &arr, int n){
        vector<int>nsl(n);
        stack<int>st;
        for(int i = 0; i<n; i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            nsl[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return nsl;
    }

    // find next smaller right side
    vector<int> getNSR(vector<int> &arr, int n){
        vector<int>nsr(n);
        stack<int>st;
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            nsr[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nsr;
    }

    // find sum of subarray minimum
    long long sumOfSubArrayMin(vector<int>& arr){
        int n = arr.size();
        vector<int> NSL = getNSL(arr, n);
        vector<int> NSR = getNSR(arr, n);
        long long sum = 0;
        for(int i = 0; i<n;  i++){
            long long ls = i - NSL[i];
            long long rs = NSR[i] - i;

            long long totalways = 1LL * ls*rs;

            long long totalsum = 1LL * arr[i] * totalways;

            sum = sum + totalsum;
        }
        return sum;
    }

    // find next greater element in left side
    vector<int> getNGL(vector<int> &arr, int n){
        vector<int>nge(n);
        stack<int>st;
        for(int i = 0; i<n; i++){
            while(!st.empty() && arr[st.top()] <= arr[i]){
                st.pop();
            }
            nge[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return nge;
    }

    // find next greater element in right side
    vector<int> getNGR(vector<int> &arr, int n){
        vector<int>nge(n);
        stack<int>st;
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] < arr[i]){
                st.pop();
            }
            nge[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nge;
    }
    
    long long sumOfSubArrayMax(vector<int>& arr){
        int n = arr.size();
        vector<int> NGL = getNGL(arr, n);
        vector<int> NGR = getNGR(arr, n);
        long long sum = 0;
        for(int i = 0; i<n; i++){
            long long ls = i - NGL[i];
            long long rs = NGR[i] - i;

            long long totalways =  1LL *ls*rs;

            long long totalsum = 1LL * arr[i] * totalways;

            sum = sum + totalsum;
        }
        return sum;
    }

    long long subArrayRanges(vector<int>& arr) {
        return sumOfSubArrayMax(arr) - sumOfSubArrayMin(arr);
    }
};
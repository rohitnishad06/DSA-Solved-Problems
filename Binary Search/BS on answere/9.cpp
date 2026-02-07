class Solution {
public:
    // find max element 
    int findMaxElement(vector<int> &arr){
        int n = arr.size();
        if (n == 0) return INT_MIN;         // // handle empty vector case
        int max = arr[0];
        for(int i = 1; i < n; i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
    }

    // find sum of the array 
    int sumOfElement(vector<int> &arr){
        int sum = 0;
        for (int num : arr){
            sum = sum + num;
        }
        return sum;
    }

    // funtion for findding the student 
    int fun(vector<int> &arr, int pages){
        int n = arr.size();
        int student = 1;
        int countPages = 0;
        for(int i = 0; i < n; i++){
            if(countPages + arr[i] <= pages){
                countPages = countPages + arr[i];
            }else{
                student++;
                countPages = arr[i];
            }
        }
        return student; 
    }

    // main funtion 
    int findPages(vector<int> &arr, int m)  {
        int n = arr.size();
        if( m > n) return -1;             // edge case 
        int low = findMaxElement(arr);
        int high = sumOfElement(arr);
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low)/2;
            int noOfStudent = fun(arr, mid);
            if(noOfStudent > m){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return low;
    }
};
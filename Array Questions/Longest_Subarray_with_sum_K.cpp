/*
arr = {1,2,3,4,5}
!-> Sub array: contigous part of array. EG: 1,2 is sub array, 3,4 is subarray, but 1,3 or 2,4 is not 

*/

#include<bits/stdc++.h>
using namespace  std;

// For both +ve & -ve
//! Time Complexity: O(N) or O(N*logN) 
int getLongestSubarray(vector<int> &a, long long k){
    int n = a.size();

    map<long long, int> preSum;
    long long sum = 0;

    int maxLen = 0;

    for(int i = 0; i < n; i++){
        sum = sum + a[i];

        if(sum == k){
            maxLen = max(maxLen, i + 1);;
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum - k; 

// Check if there exists a prefix sum that is equal to the current cumulative sum (sum) minus the target sum (k){sum-k}.
// If such a prefix sum is found (rem = sum - k), it means there is a subarray between that previous position and the current index 'i'
// whose sum is exactly 'k'. So, update the max length of such subarrays. 

        if(preSum.find(rem) != preSum.end()){
            int len = i - preSum[rem];
            maxLen = max(maxLen, len);
        }

        if(preSum.find(sum) == preSum.end()){
            preSum[sum] = i;
        }


    }    
    return maxLen;
}

// For postivie
//! Time Complexity: O(2*N),

int positiveAppr(vector<int> &a, long long k){
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();

    while(right < n){
        while(left <= right && sum > k){
            sum = sum - a[left];
            left++;
        }

        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
        right++;

        if(right < n){
            sum = sum + a[right];
        }
    }
    return maxLen;
}

int main(){
vector<int> a = {1,2,3,4,5};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    int len1 = positiveAppr(a,k);
    cout << "The length of the longest subarray is: " << len << "\n";
    cout << "The length of the longest subarray posApproach: " << len1 << "\n";

    return 0;


}
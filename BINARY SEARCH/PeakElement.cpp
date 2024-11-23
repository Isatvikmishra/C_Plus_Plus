//! Peak element who is greater than left and right element or its neighbours. Out of {1,2,3,4,6,5} Here 6

#include<bits/stdc++.h>
using namespace std;


int PeakElement(vector<int> nums){
    int n = nums.size();

    if(n == 0)  return n;
    if(nums[0] > nums[1]) return 0;
    if(nums[n-1] > nums[n-2]) return n-1;

    int low = 1, high = n-2;
    while(low <= high){
        int mid = (low + high)/2;
       
        //If arr[mid] is the peak:
        if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]){
            return nums[mid];
        }

        //if we are in left side
        if(nums[mid] > nums[mid - 1]) 
            low = mid + 1;
        
        //if we are in left side
        else   
            high = mid - 1;
    }

    return -1;
}


//! TC: O(N)
/*
int PeakElement(vector<int> nums){
    int n = nums.size();

    for(int i = 0; i < n; i++){
        if((i == 0 || nums[i - 1] < nums[i]) && (i == n-1 || nums[i] > nums[i+1])){
            return nums[i];
        }
    }
    return -1;
}
*/


int main(){
    vector<int> nums = {1,2,3,4,6,5};

    cout<< "Peak element is: " << PeakElement(nums);


}
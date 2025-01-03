#include<bits/stdc++.h>
using namespace std;

int MinRotated(vector<int> nums){
    int n = nums.size();
    int low = 0, high = n-1;
    int ans = INT_MAX;

    while(low<=high){
        int mid = (low + high)/2;

        if(nums[low] <= nums[mid]){
            ans = min(ans, nums[low]);
            low = mid+1;
        }
        else{
            ans = min(ans, nums[mid]);
            high = mid - 1;
        }    
    }
    return ans;

}

int main(){

    vector<int> nums = {4,5,6,7,1,2};
    
    int element = MinRotated(nums);
    cout << element;
}
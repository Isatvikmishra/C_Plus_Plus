#include<bits/stdc++.h>
using namespace std;


bool searchRotated(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n -1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] == target) return true;

            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low = low + 1;
                high = high - 1;
                continue;
            }

            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && target <= nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;    
            }
            else{
                if(nums[mid] <= target && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;    
            }

        }
        return false;
    }



int main(){
    
    vector<int> nums = {3,1,2,3,3,3,3};
    int target = 2;

    int element = searchRotated(nums, target);

    if(element == 0)
        cout << "false";
    else
        cout << "true";
}    
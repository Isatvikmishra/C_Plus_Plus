#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &arr, int target){
    int n = arr.size();
    int low  = 0, high = n - 1; 

    int ans = n;

    while(low <= high){
        int mid = (low + high)/2;
        for(int i = 0; i<n; i++){
            if(arr[mid] >= target){
                ans = mid;
                high = mid - 1; 
            }
            else
                low = mid + 1;
        }
    }
    return ans;

}


int main(){
    vector<int> arr = {1,2,4,5,6};
    int target = 3;

    int index = searchInsert(arr, target);
    cout << index;

}
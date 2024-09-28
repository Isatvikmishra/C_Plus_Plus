//! We can use hashing or 2 pointer both are optimal

#include <bits/stdc++.h>
using namespace std;

/*
! Using 2Pointer approach >>>>>>>
?TC: O(N) + O(N*logN) loop will run at most N times. And sorting the array will take N*logN time complexity.
*O(1) as we are not using any extra space.
*/
vector<int> twoSum(vector<int> &arr, int target){

    int n = arr.size();
    sort(arr.begin(), arr.end());

    int left = 0;
    int right= n - 1;

    for(int i = 0; i < n; i++){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return {left, right};
        }
        else if(sum < target) left++;
        else right--;
    }
    return {-1,-1};

}




/*
!HASHING >>>>>>> TC: O(N) & O(NlogN) if we use map instead of unordered map
?SC: O(N)
vector<int> twoSum(vector<int> &arr, int target){
    int n = arr.size();
    unordered_map<int,int> mpp;
    for(int i=0; i < n; i++){
        
        int num = arr[i];
        int sum = target - num;

        if(mpp.find(sum) != mpp.end()){
            return {mpp[sum], i};
        }
        mpp[num] = i;
    }
    return {-1,-1};

}
*/


/*
!BRUTE FORCE >>>>> O(N^2)
vector<int> twoSum(vector<int> &arr, int target){
    int n = arr.size();
    vector<int> ans;


    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            } 
        }
    }
    return {-1, -1};

}
*/
int main(){
    vector<int> arr = {2,7,11,15};
    int target = 9;
    vector<int> Sum = twoSum(arr, target);

    if(Sum[0] && Sum[1] == -1){
        cout << "not found";
    }
    else 
    cout << Sum[0] << " " << Sum[1];
    
}
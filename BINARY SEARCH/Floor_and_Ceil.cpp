#include<bits/stdc++.h>
using namespace std;

int findFloor(vector<int> arr, int target){
    int n = arr.size();
    
    
    int low = 0, high = n - 1;
    int ans = n;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] <= target ){
            ans = arr[mid];
            low = mid + 1;
        } 
        else
         high = mid -1;
    }
    return ans;
}

int findCeil(vector<int> arr, int target){
    int n = arr.size();
    int ans = n;
    
    int low = 0, high = n - 1;
    
    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] >= target){
            ans =arr[mid];
            high = mid - 1;
        }
        else
        low = mid + 1 ;
    }
    return ans;
}


int main(){
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int target = 5;

    int Floor = findFloor(arr, target);
    int Ceil = findCeil(arr, target);

    cout << "Floor Value:" << Floor << " & Ceil Value: " << Ceil;

}
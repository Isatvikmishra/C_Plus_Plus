#include<bits/stdc++.h>
using namespace std;

int bsElement(vector<int> &arr, int target){
    int n = arr.size();
    int low = 0, high = n-1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] == target) return mid;
        else if(target > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;

}

int main(){
    vector<int> arr = {1,4,6,7,2,8,3,9};
    int target = 6;

    int ele =  bsElement(arr, target);
    if(ele == -1) 
        cout << "Ele not present";
    else
        cout << "ele present and at" << ele;    

}

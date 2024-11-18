#include<bits/stdc++.h>
using namespace std;

//?  LB = arr[index]  >= x;


//! In C++ theres a STL meth:
//* lb = lower_bound(arr.begin(), arr.end(), x)


//! TC: O(logN) BST

int lowerBound(vector<int> arr, int x){
    int n = arr.size();
    int ans = n;
    
    int low = 0, high = n - 1;
    
    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] > x){
            ans = mid;
            high = mid - 1;
        }
        else
        low = mid + 1 ;
    }
    return ans;


}


//! TC: O(N) LS
/*

int lowerBound(vector<int> &arr, int x){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] >= x){
            return i;
        }
    }
    return n;
}
*/

int main(){
    vector<int> arr = {3,5,8,15,19};
    int x = 6;

    int ind = lowerBound(arr, x);
    cout <<  ind;
}
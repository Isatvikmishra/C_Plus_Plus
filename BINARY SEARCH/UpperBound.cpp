#include<bits/stdc++.h>
using namespace std;

//* UB = arr[index]  > x; 

//! In C++ theres a STL meth:
//* Ub = upper_bound(arr.begin(), arr.end(), x)








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


int main(){
    vector<int> arr = {2,3,6,7,8,8,11,11,11,12};
    int x = 6;

    int ind = lowerBound(arr, x);
    cout <<  ind;
}
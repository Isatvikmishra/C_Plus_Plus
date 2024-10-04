#include<bits/stdc++.h>
using namespace std;

//!next_permutation inbuilt function
/*
!Interviewer might ask impelement the function by yourself.
int main() {
    int arr[] = {1,3,2};
    
    next_permutation(arr,arr+3);//using in-built function of C++
    
    cout << arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
}
*/

//!Brute Force
/*
!TC: O(N! x N)
EG: for array of 15 size it will take around ~10^12 iterations

*Find all the permutation
*Linear search from all the elements 
*Print the next element.


*/

//! TC: O(N)+O(N)+O(N) =~ O(N);

vector<int> nextPermutation(vector<int> &a, int n){
   // Step 1: Find the break point:
    int ind = -1;

    for(int i = n-2; i >= 0; i--){
        if(a[i] < a[i+1]){
            ind = i; // index i is the break point
            break;
        }
    }
    
    if(ind == -1){
        reverse(a.begin(), a.end());
        return a;
    }
    // Step 2: Find the next greater element
    //         and swap it with arr[ind]:
    for(int i = n - 1; i > ind; i--){
        if(a[i] > a[ind]){
            swap(a[i], a[ind]);
            break;
        }
    }
    // Step 3: reverse the right half:

    reverse(a.begin() + ind + 1, a.end());

    return a;
}

int main(){
    vector<int> a = {3,2,1};
    int n = a.size();

    vector<int> ans = nextPermutation(a, n);
    for(int i =0; i<n; i++){
        cout << ans[i];
    }
}
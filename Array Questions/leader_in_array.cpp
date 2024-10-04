#include<bits/stdc++.h>
using namespace std;

//! TC: O(N)
//* We started from last and if we found any no > then max we push that. 
vector<int> leader(vector<int> &arr, int n){
    
    vector<int> ans;
 
    // Last element of an array is always a leader,
    // push into ans array.
    int max = arr[n-1];
    ans.push_back(arr[n-1]);
   
   
    // Start checking from the end whether a number is greater
    // than max no. from right, hence leader.
    for(int i = n-2; i >=0; i--){
        if(arr[i] > max){
            max = arr[i];
            ans.push_back(arr[i]);
        }
    }
return ans;
}

//! TC: O(N^2)
/*
vector<int> leader(vector<int> &arr, int n){
    
    vector<int> temp;

    for(int i = 0; i < n ; i++){
    bool leader = true;

        for(int j = i + 1 ; j < n; j++){
            if(arr[j] > arr[i]){
                leader = false;
                break;
            }
        }

        if(leader){
            temp.push_back(arr[i]);
        }
    }
return temp;
}
*/

int main(){
    vector<int> arr = { 10, 22, 12, 3, 0, 6};
    int n = arr.size();

    vector<int> ans = leader(arr, n);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

}
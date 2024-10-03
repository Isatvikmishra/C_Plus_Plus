#include<bits/stdc++.h>
using namespace std;

//!For unEqual no of +ve & -ve 

vector<int> rearrange(vector<int>&arr, int n){
    vector<int> pos, neg;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    } 

    if(pos.size() > neg.size()){
        for(int i = 0; i < neg.size(); i++){
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];   
        }

        int index = neg.size() * 2;

        for(int i = neg.size(); i < pos.size(); i++){
            arr[index] = pos[i];
            index++;
        }
    }
    else {
        for(int i = 0; i < pos.size(); i++){
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];   
        }
        int index = pos.size() * 2;

        for(int i = pos.size(); i < neg.size(); i++){
            arr[index] = neg[i];
            index++;
        
        }
    }
return arr;

}



//!For Equal no of +ve & -ve 
/*
!TC: O(2N)

vector<int> rearrange(vector<int>&arr, int n){
     vector<int> ans(n ,0);
    int pos = 0;
    int neg = 1;
   

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            ans[pos] = arr[i];
            pos +=2;
            
        }
        else{
           ans[neg] = arr[i];
            neg +=2;
        }
    }

return ans;
}
*/

//!Brute Force->>>>>> 
/*

! first loop: O(n) , second: O(N/2) + O(N/2) ~= O(2N), TC: O(2N)
!Space Complexity:  O(N/2 + N/2) = O(N)
vector<int> rearrange(vector<int>&arr, int n){
    vector<int> pos;
    vector<int> neg;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            pos.push_back(arr[i]);
        }
        else
            neg.push_back(arr[i]);
    }

    for(int i = 0; i < n/2; i++){

        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }

return arr;
}

*/

int main(){

    vector<int> arr = {1,2,-4,-5};
    int n = arr.size();

    vector<int>ans = rearrange(arr, n);

    for(int i = 0; i < n; i++){
        cout << ans[i] << ",";
    }
}
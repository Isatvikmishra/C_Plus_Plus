#include<bits/stdc++.h>
using namespace std;


//! Can be solved using Boyer-Moore Voting Algorithm


//!Using Hashing; O(nLogn)
int findElement(vector<int> &a, int n){

    map<int, int>mpp;

    for(int i=0; i<n;i++){
        mpp[a[i]]++;
    }

    for(auto it: mpp){
        if(it.second > (n/2)){
            return it.first;
        }
    }
}






/*
!-> O(N^2)
int findElement(vector<int> &a, int n){
    
    for(int i = 0; i<n; i++){
        int ctr = 0;
            for(int j = 0; j < n; j++){
                if(a[j] == a[i]){
                    ctr +=1;
                }
            }
        if (ctr >= n/2)
        return a[i];    
        
    }
} 
*/

int main(){

    vector<int> a = {1,1,2,0,1,1};
    int n = a.size();

    int ans = findElement(a, n);

    cout << ans;
}
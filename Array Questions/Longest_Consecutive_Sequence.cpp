#include<bits/stdc++.h>
using namespace std;




//! TC: O(n) × O(n) = O(n^2)
/*
bool linearSearch(vector<int> &arr, int num){
    int n = arr.size();
    for(int i = 0; i<n; i++){
        if(arr[i] == num){
            return true;
        }
    }
    return false;
}

int longestElement(vector<int> &arr, int n){
    int longest = 1;

    for(int i = 0; i < n; i++){
        int x = arr[i];
        int ctr = 1;
        
        while(linearSearch(arr, x + 1) == true){
            x += 1;
            ctr +=1;
        }
    
        longest = max(longest, ctr);
    }
return longest;
}
*/


int main(){
    vector<int> arr = {12,1,2,5,4,8,3};
    int n = arr.size();

    int ans = longestElement(arr, n);
    
    cout << ans << " ";   
 

}
#include<bits/stdc++.h>
using namespace std;

//!TC-> O(N)->>>>>>>
int buySell(vector<int> &arr, int n){
    int minPrice = INT_MAX;
    int maxPrice = 0;

    for(int i = 0; i < n; i++){
        minPrice = min(minPrice, arr[i]); 

        maxPrice = max(maxPrice, arr[i] - minPrice);
    }
    return maxPrice;
}

//!Brute Force: TC-> O(N^2)->>>>>>>
/*

int buySell(vector<int>&arr, int n){
    int maxi = 0;
    for(int i=0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int ans = arr[j] - arr[i];
            if(ans > maxi){
                maxi = ans;
            }
        }
    }
return maxi;
}

*/

int main(){
    vector<int> arr = {7,1,5,9,2};
    int n = arr.size();

    int value = buySell(arr, n);
    cout << value;

}
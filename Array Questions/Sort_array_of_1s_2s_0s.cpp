#include<bits/stdc++.h>

using namespace std;

//! Can be solved using dutch national flag algorithm. 

/* 
!O(n) + O(n) = O(n).


vector<int> sortarr(vector<int> &arr, int n){
    int cnt0 = 0, cnt1=0, cnt2 = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == 0) 
            cnt0++;
        else if(arr[i] == 1) 
            cnt1++;
        else cnt2++;
    }

    arr.clear();
    for(int i=0; i < cnt0; i++){
         arr.push_back(0);
    }
   for(int i=0; i < cnt1; i++){
        arr.push_back(1);
    }
    for(int i=0; i < cnt2; i++){
        arr.push_back(2);
    }
    
    return arr;

}
*/

/*
!The code uses a bubble sort algorithm O(N^2)

vector<int> sortarr(vector<int> &arr, int n){
    
    vector<int> temp;
    for(int i =0; i < n-1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]){
              swap(arr[j], arr[j+1]);
            }
        }
    }
    return arr;
}
*/


int main(){
    vector<int> arr = {2,0,1,1,1,2,0};
    int n = arr.size();
    
    vector<int> ans = sortarr(arr,n);
    
    for(int i = 0; i < n;i++){
        cout << ans[i];
    }

}
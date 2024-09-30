
/*
!ALGO:
?    a[mid] == 0;
        swap(a[low], a][mid])
        low++
        mid++
?    a[mid] == 1;
        mid++
?    a[mid] == 2;
        swap(a(mid), a(high))
        high--
*/

#include<bits/stdc++.h>
using namespace std;

//! TC: O(n)	

vector<int> DutchAlgo(vector<int> &arr, int n){
   int low = 0, mid = 0, high = n-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
            mid++;
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    return arr;

}

int main(){
    vector<int> arr = {2,0,1,1,1,2,0};
    int n = arr.size();
    
    vector<int> ans = DutchAlgo(arr,n);
    
    for(int i = 0; i < n;i++){
        cout << ans[i];
    }

}
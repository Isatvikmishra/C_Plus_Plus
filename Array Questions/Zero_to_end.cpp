#include<bits/stdc++.h>
using namespace std;

int zeroEnd(vector<int> &arr, int n){
   
    int j = 0;
    
    for(int i = 0; i < n; i++){
          if (arr[i] != 0) {
                // Swap nums[i] with nums[j]
                swap(arr[i], arr[j]);
                j++;
          }
    }
}


int main(){
    vector<int> arr = {1,2,0,2,0,1,7,8,9};
    int n = arr.size();
    
    zeroEnd(arr,n);

    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}
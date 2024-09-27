#include<bits/stdc++.h>
using namespace std;

int main(){
//! O(N)
    vector<int> arr = {1,1,2,3,3};
    int n = arr.size();
     int xorr = 0;

     for(int i=0; i<n; i++){
        xorr = xorr ^ arr[i];

     }

     cout << xorr;

/*
!O(N^2)    
    
    for(int i=0; i<n;i++){
        int num = arr[i];
        int ctr = 0;    
        for(int j = 0; j<n; j++){
            if(arr[j] == num)
             ctr++;
        }
        
        if(ctr == 1){
            cout << "The single element is: " << num << endl;
            break;
        }
    }
*/
}
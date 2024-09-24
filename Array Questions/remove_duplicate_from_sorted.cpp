/*
!-> Set data structure stores the unique the element.


*/

#include<bits/stdc++.h>
using namespace std;

//!BRUTE FORCE:

int removeDup(int arr[], int n){
    set <int> set;
    for(int i=0; i<n; i++){
        set.insert(arr[i]);
    }
    int k =  set.size();
    int j=0;
    for(int x: set){
        arr[j++] = x;
    }

    return k;

}


//! Optimal

int removeDuplicate(vector<int> &arr, int n){
    int i=0;
    for(int j=0; j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;

}

int main(){
    
    int n = 7;
    vector<int> arr = {1,1,2,2,2,3,3};

    int k = removeDuplicate(arr,n);
    
    cout << "The array after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
    }

    
}
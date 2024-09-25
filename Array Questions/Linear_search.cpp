#include<bits/stdc++.h>

using namespace std;

int Search(vector<int> &arr,int n, int k){
    for(int i= 0; i<n; i++){
        if(arr[i] == k)
           return i;
    }
return -1;

}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int n = arr.size();
    int k; 
    cin >> k;

    int var = Search(arr, n, k);
    if (var != -1){
        cout << var;
    } else
    cout << "Element not present";

    return 0;

}
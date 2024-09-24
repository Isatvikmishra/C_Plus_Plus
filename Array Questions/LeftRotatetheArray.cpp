#include<bits/stdc++.h>
using namespace std;

int rotate(vector<int> arr, int n){

    int temp = arr[0];
    for(int i=1; i < n ; i++){
        arr[i-1] = arr[i]; //! Stored the first element of array in a variable
    }
    arr[n-1] = temp; // assigned the value of variable at the last index

    cout << "After rotating:";
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }

}

int main(){
    int n = 5;
    vector<int> arr = {1,2,3,4,5};

    cout << "Before rotating:";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    rotate(arr, n);

}
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n = 5;
    vector<int> arr = {1,2,8,2,5};


    bool sorted = true;

    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
           sorted = false;
        }
    }

    if(sorted == true){
        cout << "array sorted";
    }
    else 
    cout << "not sorted";
  
}
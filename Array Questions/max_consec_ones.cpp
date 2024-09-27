#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,0,1,1,0,1};
    int n = arr.size();
    int count = 0;
    int max_count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            count ++;
        }
        else if (arr[i] != 1){
            count = 0;
        }
        if(count > max_count){
            max_count =  count;
        }
    }

//Or 
/*
!Using Max Function

    for(int i =0; i< n;  i++){
        if(arr[i] == 1){
            count++;
            max_count = max(max_count, count);
        }
        else {
            count = 0;
        }
    }
*/


    cout << max_count;
    




}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    vector <int> arr = {3,4,8,1,2};

    int largest = arr[0];
    for(int i = 0; i < n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << largest;



}
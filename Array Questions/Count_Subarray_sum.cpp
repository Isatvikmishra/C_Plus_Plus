#include<bits/stdc++.h>
using namespace std;

//!TC:  O(N3)
/*
int countSub(vector<int> arr, int r){
    int n = arr.size();
    int ctr = 0;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 0; //Here j = i & k = i, so we dont go back
                for(int k = i; k <= j; k++){
                    sum = sum + arr[k];
                }
            if(sum == r)
                ctr++;
        }
    }
    return ctr;
}
*/

//!TC:  O(N^2)
/*
int countSub(vector<int> arr, int r){
    int n = arr.size();
    int ctr = 0;

    for(int i = 0; i < n; i++){
    int sum = 0;
        for(int j = i; j < n; j++){
            sum = sum + arr[j];     
            
            if(sum == r)
                ctr++;      
        }
        
    }
    return ctr;
}
*/

//!TC:  O(N)
int countSub(vector<int> arr, int r){
    int n = arr.size();
    unordered_map<int, int> mpp;
    mpp[0] = 1;

    int preSum = 0 , ctr = 0;

    for(int i = 0; i < n; i++){
        preSum += arr[i];
        int remove = preSum - r;
        ctr += mpp[remove];
        mpp[preSum] += 1;
    }

return ctr;

}

int main(){
    vector<int> arr = {3, 1, 2, 4};
    int r = 6;

    int cnt = countSub(arr, r);
    cout << cnt;


}
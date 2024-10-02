#include<bits/stdc++.h>
using namespace std;


//! Kadane's Algorithm->>>>> 
//*TC: O(N)

int subArray(vector<int> arr, int n){
    long long maxi = LONG_MIN, sum = 0;
    int ansStart = -1, ansEnd = -1, start =0;

    for(int i = 0; i<n; i++){
        if(sum == 0) start = i;
        sum += arr[i];
            if(sum > maxi){
                maxi = sum;
                ansStart = start, ansEnd = i;
            }     

            if(sum < 0)//If any negatives dont carry it. Below will check 
            {
                sum = 0;
            }    
        }
    //? FOR SUM:        
    if (maxi < 0) //If we dont get any or not greater than 0 it will return empty.   
        maxi = 0;

    //? FOR Sub Array:    
    cout << "The subarray is: [";

    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }

    cout << "] \nSum: ";

return maxi;   
}

/*

!Time Complexity: O(N2),
int subArray(vector<int> arr, int n){
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
         int sum = 0;
        for (int j = i; j < n; j++){
            sum =+ arr[j];
            maxi = max(maxi, sum);        
        }
    }
return maxi;    
}
*/
int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int n = arr.size();



    int ans = subArray(arr,n);
    
    cout << ans;
    return 0;
}
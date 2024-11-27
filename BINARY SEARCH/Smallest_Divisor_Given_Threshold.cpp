#include<bits/stdc++.h>
using namespace std;

/* //! Linear
int smallestDivisor(vector<int> &arr, int limit){
    int n = arr.size();
    int maxi = *max_element(arr.begin(), arr.end());


    for(int i = 1; i <= maxi; i++){

        int sum = 0;

        for(int j = 0; j < n; j++){
            sum += ceil((double)arr[j] / i);
        }

        if(sum <= limit)
            return i;     
    }
    return -1;
}
*/

//! Binary Search

int sumByDivisor(vector<int>& arr, int div){

        int sum = 0;
        int n = arr.size();

        for(int i = 0; i < n; i++){
            sum += ceil(double(arr[i]) / div);
        }
        return sum;
}


int smallestDivisor(vector<int>& arr, int limit) {
        int n = arr.size();
        int low = 1, high = *max_element(arr.begin(), arr.end());

        while(low <= high){
            int mid = (low + high)/2;

            if(sumByDivisor(arr, mid) <= limit)
                high = mid - 1;
            else 
                low = mid + 1;    
        }
        return low;
    }


int main(){
    vector<int> arr = {1,2,5,9};
    int limit = 6;

    int ans = smallestDivisor(arr, limit);
    cout << ans;
    return 0;   

    


}
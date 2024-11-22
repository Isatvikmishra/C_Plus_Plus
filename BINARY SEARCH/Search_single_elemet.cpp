#include<bits/stdc++.h>
using namespace std;

// TC: log N

int singleNonDuplicate(vector<int>& arr){
    int n  = arr.size();

    if(n == 1)  return arr[0];
    if(arr[0] != arr[1]) return arr[0]; //* For First element
    if(arr[n-1] != arr[n-2]) return arr[n-1];   //* For last element

    int low = 1, high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        
        //To check mid element for single
        if(arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
            return arr[mid];

        //if we at left and at odd index then our left element should be equal & similarly if at even index than our right index should be equlal

        if((mid % 2 == 1 && arr[mid - 1] == arr[mid] ) || (mid % 2 == 0 && arr[mid] == arr[mid + 1]))
            low = mid + 1; //eliminating left side.

        //if we at right and at odd index then our right element should be equal & similarly if at even index than our left index should be equlal
        else 
            high = mid - 1;    //eliminating right side.
    }
    return -1;
}

//! TC: O(N)
/*
int singleNonDuplicate(vector<int>& arr){
    int n = arr.size();
   
    if (n == 1) return arr[0];

    for(int i = 0; i<n; i++){

        if(i == 0){
            if(arr[i] != arr[i+1]){
                return  arr[i];
            }
        }

        else if (i == n-1){
            if(arr[i] != arr[i-1]){
                return arr[i];
            }
        }

        else{
            if(arr[i] != arr[i-1] && arr[i] != arr[i+1]){
                return arr[i];
            }
        }
    }



}
*/


int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = singleNonDuplicate(arr);
    cout << "The single element is: " << ans << "\n";
    return 0;
}


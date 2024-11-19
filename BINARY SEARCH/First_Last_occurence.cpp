#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>arr, int target){
    int n = arr.size();
    int low = 0, high = n-1; 
    int ans = n;
    
    while(low <= high){
        int mid = (low + high) / 2;
            if(arr[mid] >= target){
                ans = mid;
                high = mid-1;
            }   
            else 
                low = mid + 1;
    }

    return (ans == n) ? -1 : ans;
}

int UpperBound(vector<int>arr, int target){
    int n = arr.size();
    int low = 0, high = n - 1; 
    int ans = n;
    
    while(low <= high){
        int mid = (low + high) / 2;
                if(arr[mid] > target){
                    ans = mid;
                    high = mid-1;
                }   
                else 
                    low = mid + 1;
               
    }
  

   return (ans == n) ? -1 : ans-1;
}

//Tc: O(N)
/*
vector<int> elementOccurence(vector<int>arr, int target){

    int first = -1, last = -1;
    int n = arr.size();

    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            if(first == -1)
                first = i;
            last = i;    
        }
    }
    
return {first, last};

}
*/

int main(){
    
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int target = 11;

    int lb = lowerBound(arr, target);
    int ub = UpperBound(arr, target);

    //! FOR O(N) cout <<"[" << result[0] << "," << result[1] << "]";
    cout <<"[" << lb << "," << ub << "]";

}
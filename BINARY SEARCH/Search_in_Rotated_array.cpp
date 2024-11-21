#include<bits/stdc++.h>
using namespace std;

int searchRotated(vector<int> &arr, int target){
    int n = arr.size();
    int low = 0, high = n - 1;

    while(low <= high){

        int mid = (low + high)/2;

        if(arr[mid] == target) return mid;   

        //ensure left half is sorted
        if(arr[low] <= arr[mid]){
            if( arr[low] <= target && target <= arr[mid] ){
                //elements exist as left half is sorted and target is smaller than first element and mid element also.

                high = mid - 1;
            }

            else{
                low = mid + 1;
            }
        }

        //ensures right half is sorted
        else{
            if(arr[mid] <= target && target <= arr[high]){
                low = mid + 1;
            }
            else{ 
                high = mid - 1;
            }
        }    
    }
    return -1;
}

int main(){
    
    vector<int> arr = {7,8,9,1,2,3,4,5,6};
    int target = 9;

    int element = searchRotated(arr, target);


    if(element == -1)
        cout << "element not present";    
    else
        cout <<  " Element present at index: " << element;
}    
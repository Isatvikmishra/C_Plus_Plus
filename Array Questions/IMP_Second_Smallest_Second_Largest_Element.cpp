#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr, int n){
    int largest = arr[0];
    int sLargest = INT_MIN;
    
    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
            
        }
        else if (arr[i] < largest && arr[i] > sLargest){
            sLargest = arr[i];
        }
    }
    return sLargest;
 
}

int secondSmallest(vector<int> &arr, int n){
    int smallest = arr[n-1];
    int sSmallest = INT_MAX;

    for(int i=1; i<n; i++){
        if (arr[i] < smallest){
            sSmallest = smallest;
            smallest = arr[i];
        } 
        else if (arr[i] != smallest && arr[i] < sSmallest){
            sSmallest = arr[i];
        }
    }
    return sSmallest;

}

int main(){
   
int n = 5;
vector<int> arr = {4,3,4,5,2};
   
    /*
        int small = INT_MAX, secondSmall = INT_MAX;
        int large = INT_MIN, secondLarge = INT_MIN;

        for(int i=0; i<n; i++){
            small = min(small, arr[i]);
            large = max(large, arr[i]);
        }

        for(int i=0; i<n; i++){
            if(arr[i] < secondSmall && arr[i]!=small){
                secondSmall=arr[i];
            }
            else if(arr[i]>secondLarge && arr[i] != large){
                secondLarge = arr[i];
            }
        }

    cout << "Second smallest " << secondSmall << endl;
    cout << "Second largest " << secondLarge << endl;
    */

//!Optimal approach
    int sLargest = secondLargest(arr, n);
    int sSmallest = secondSmallest(arr,n);

    cout << sLargest << endl;
    cout << sSmallest;
}

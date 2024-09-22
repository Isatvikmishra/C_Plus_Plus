#include<bits/stdc++.h>
using namespace std;


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
 int largest = arr[0];
 int sLargest = INT_MIN;
 
 int smallest = arr[n-1];
 int sSmallest = INT_MAX;

 for(int i = 1; i < n; i++){
    if(arr[i] > largest){
        largest = arr[i];
        sLargest = arr[i-1];
    }
    else if (arr[i] < smallest){
        sSmallest = smallest;
        smallest = arr[i];
    }
    else if (arr[i] != smallest && arr[i] < sSmallest){
        sSmallest = arr[i];
    }
 }
    cout << sLargest << endl;
    cout << sSmallest;


}

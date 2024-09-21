//Divide & merge.
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low; //starting index of left half of arr
    int right = mid + 1; // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while(left <= mid && right <= high) // till this condition mets means we have elements on respective side.
    {
        if(arr[left] <= arr[right])    //Left portion's first array compared with right protions 1st array, whoever will smaller goes to main array,

        { 
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

   //  if elements on the right side are still left //

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    //Now we have take array form temp and place it in main array i.e. arr.

    for(int i = low; i<= high; i++){
        arr[i] = temp [ i - low]; //low is the index of array from 0-n
    }


}

void mergeSort(vector<int> &arr, int low, int high){
    if(low>=high)
    return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid); //! for left side
    mergeSort(arr, mid+1, high); //! for right side
    merge(arr, low , mid, high);

}



int main(){
    vector<int> arr = {9,4,7,6,3,1,5};
    int n=7;
    cout << "before sorting array" << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);
     cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;


}
/*
! TC: whenever it keeps dividing by 2 by 2 we have (N log n).

* Its log times the division happens. suppose it has 16 elments so it gets div into 16 -> 8 -> 4 -> 2 -> 1. Its nothing but 4 steps & 2^4= 16 & log base 2 (16) = 4.

! Sc- O()
*/



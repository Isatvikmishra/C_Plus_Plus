/*
!-> Quick Sort solves in ascending as well as descending order.
*It is better than Merge sort as we dont need any extra variable in it.

!-> Rules: 
    * Pick a Pivot(1st, last, median or random element) and place it in its correct place.
    * Smaller element moves to left of pivot if larger than to right side than pivot would be at its correct position.

!-> Divide & Conqueror alog.



*/

#include<bits/stdc++.h>
using namespace std;

int qsPivot(vector<int> &arr, int low, int high){

    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j )
    {
        while(arr[i] <= pivot && i <= high - 1)
            //* We keep checking till we find element i.e. > than pivot.
        {
            i++;
        }
        while(arr[j] > pivot && j >= low + 1) 
            //* We keep finding till we find element smaller than pivot.
        {
            j--;
        }

        if(i < j)
        {
            swap(arr[i], arr[j]); 
            //* As j crossed i we swap i with j.
        }
    } 
    swap(arr[low], arr[j]);
    return j; 
}

void qs(vector<int> &arr, int low, int high){
    if(low < high){
        int pIndex = qsPivot(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main(){
    vector<int> arr = {4,6,3,5,9,7,1};
    int n = arr.size();

    cout << "Before Quick sort:";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr = quickSort(arr);

    cout << "After Quick Sort:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

//TC: O(N log N)
// Sc: O(N)

/*
!-> for descending  at line ~39.          
            while (arr[i]>=pivot && i<high){
                 i++;
             }
             while (arr[j]<pivot && j>low){
                 j--;
             }
*/ 
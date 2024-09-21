// Selection Sort: Selecting Minimum and swap;

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0;i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<=n-2; i++){
        int mini = i;
            for(int j=i; j <= n-1; j++){
                if(arr[j] < arr[mini]){
                mini = j;
                }
            } 
            int temp = arr[i];
            arr[i] = arr[mini];
            arr[mini] = temp;
            
    } 
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
return 0;
}

// TC: as in J wala for loop everytime we will have 1 less comparison= 1+2+3+.....+n-1 = n(n-1)/2 => n^2/2 -n/2.
// As we ignore smaller values and constant so we have.
// O(n^2)
//  It has O(N) swaps This is only sorting with order of N swaps.
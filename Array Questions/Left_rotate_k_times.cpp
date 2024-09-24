#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int leftRotate(int arr[], int n, int d){
    /* 
        !-> (1,2,3,4,5), n = 5 
        !-> d = 2
        !-> if we reverse first d elements it should look like this  {2,1,3,4,5} 
        !-> Again we reverse n - d elements {2,1,5,4,3}
        !-> Now if we reverse whole we have {3,4,5,2,1}
    */
//* Reverse is c++ stl functioin. 
//* Its Syntax is reverse(begin + "From where we want" , end + "Till where we want")

    reverse(arr,arr + d);         // Reverse the first k elements

    reverse(arr + n - d, arr + n);        // Reverse the rest of the elements after k

    reverse(arr , arr + n);        // Reverse the entire array


}

int main(){
    int n = 5;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int d; 
    cin >> d;

    leftRotate(arr,n,d);
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}

/*
! int rotateBrute(){
    d = d % n;  (12/5 = 2 {We have to rotate 2 elements only} )

    int temp[d];

    ? Storing the d elements in temp;
    for(int i =0; i < d; i++){
        temp[i] = arr [i];
    }
    ? Re assigningn the position of left elements of array.
    for(int i = d; i < n; i++ ){
        arr[i-d] = arr[i];
    }

    ? Putting the elements to the right most from temp that we stored earlier.
    for(int i = n - d; i < n; i++ ){
        arr[i] = temp[i - ( n - d ) ];
    }

}
!It will take O(d) space complexity as we are storing in temp array to reduce O(1) we have optimal solution as Rotate().
*/
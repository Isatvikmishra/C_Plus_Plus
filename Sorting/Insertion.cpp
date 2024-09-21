// Insetion:  Takes an element and places it in its coorecet position.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<=n-1;i++){
        {
            int j=i;
            while(j>0 && arr[j-1]>arr[j]) //This means if left element is greater than swap
            { 
                swap(arr[j-1], arr[j]); 
                // or we could do with int temp = arr[j-1] & arr[j-1] = arr[j] & arr[j] = temp
                j--;
            }

        }
    }  

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

// TC: Worst & avg O(n^2);
// Best case O(N); because no swaps happen.
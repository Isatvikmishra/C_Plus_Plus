// Bubble Sort: Pushes the maximum to the last by adjacent swaps. Checks with adjacent and chcks than wap whoever is bigger.
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for (int i= n-1; i>=0; i--){
        int didSwap = 0;
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap=1;
            }    
        }
        if(didSwap==0){
            break;
        }    
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

}
//TC: it will run for n natural numbers similar to selection sort. So O(N^2) it is worst comple.
// If the array is already sorted and we can find out in first go then we dont need it to check with every num again again. so if didSwap remains zero we could break and it will be best time comp and it will be, O(N),{BEST}
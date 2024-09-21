#include<bits/stdc++.h>
using namespace std;

int main(){
        int n = 5;
        vector<int> arr = {1,2,3,4,5};
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
}

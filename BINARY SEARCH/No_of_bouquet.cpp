#include<bits/stdc++.h>
using namespace std;


bool noOfBouquet(vector<int>&arr, int k, int m, int day ){
    int ctr = 0;
    int bouquet = 0;
    int n = arr.size();

    for(int i = 0; i <= n-1; i++){
        if(arr[i] <= day){
            ctr++;
        }
            
        else{
            bouquet += ( ctr / k);
            ctr = 0;
        }    
    }
    bouquet += (ctr / k);
    return bouquet >= m;
}

int roseGarden (vector<int> arr, int k, int m){
        long long val = m * k;
        int n = arr.size();
        if(n < val) return -1;

        int mini = INT_MAX, maxi = INT_MIN;

             for (int i = 0; i < n; i++) {
                mini = min(mini, arr[i]);
                maxi = max(maxi, arr[i]);
            }
            
            /* LINEARLY WE DOING 
                for(int i = mini; i <= maxi; i++){
                    if(noOfBouquet(arr, k, m, i))
                        return i;
                }
                return -1;
            */

        int low = mini, high = maxi;

        while(low <= high){
           int mid = (low+high)/2;

           if(noOfBouquet(arr, k,m,mid))
                high = mid - 1;
           else 
                low = mid + 1;          
        }

        return low;
}

int main(){
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int m = 2; //no of bouquet
    int k = 3; //adjacent side to take

    int ans =  roseGarden(arr, k, m);

    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;
}
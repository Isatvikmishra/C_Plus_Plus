#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> &v){
    int maxi = INT_MIN;
    int n = v.size();

    for(int i = 0; i < n-1; i++){
        maxi = max(maxi, v[i]);
    }

    return maxi;
}

int calculateTotalTime(vector<int> v, int hourly){
    int n = v.size();

    int totalTime = 0;

    for(int i = 0; i < n-1; i++){
        totalTime += ceil((v[i])/hourly);

    }   

    return totalTime;
}


int minimumRateToEatBananas(vector<int> &v, int h){

    int maxi = findMax(v);

    int low = 1, high = maxi;

    while(low<=high){
        int mid = (low+high)/2;
        int totalTime = calculateTotalTime(v,mid);

        if(totalTime <= h){
            high = mid -1;
        }
        else{
            low = mid+1;
        }

    }
    return low;
}

/*
int minimumRateToEatBananas(vector<int> &v, int h){

    int maxi = findMax(v);

    for(int i = 1; i <= maxi; i++){
        int reqTime = calculateTotalTime(v, i);
        if(reqTime <= h){
            return i;
        }
    }

} 
*/

int main(){
    vector<int> v = {7, 15, 6, 3};
    int h = 8;

    int ans = minimumRateToEatBananas(v, h);

    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";
    return 0;

}
#include<bits/stdc++.h>
using namespace std;


int daysReq(vector<int> w, int cap){
    int day = 1;
    int load = 0;

    for(int i = 0; i < w.size(); i++){
        if(load + w[i] > cap){
            day = day + 1;
            load = w[i];
        }
        else
            load += w[i];
    }
    return day;

}

int leastWeightCapacity(vector<int>w, int days){

    int low = *max_element(w.begin(), w.end());
    int high = accumulate(w.begin(), w.end(), 0);

    while(low <= high){
        int mid = (low + high)/2;

        if(daysReq(w, mid) <= days)
            high = mid -1;
        else    
            low = mid + 1;    
    }
    return low;

}




//! Linear
/*
int leastWeightCapacity(vector<int>w, int days){

    int maxi = *max_element(w.begin(), w.end());
    int sum = accumulate(w.begin(), w.end(), 0);

    for(int cap = maxi; cap <= sum; cap++){
        if(daysReq(w, cap) <= days)
            return cap;
    }
    return -1;


}
*/

int main(){
    vector<int> w = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    int ans =  leastWeightCapacity(w, days);

    cout << ans ;
    return 0;

}
#include<bits/stdc++.h>
using namespace std;



int sqRoot(int n){

    int low = 1, high = n;

    while(low <= high){
        long long mid = (low + high)/2;

        long long val = mid * mid;

        if(val <= n){
            low = mid + 1;
        }
        else    
            high = mid - 1;
    }
    return high;

}


//! TC:  O(N)
/*
int sqRoot(int n){
   
    int ans = 0;

    for(int i = 0; i < n; i++){
       long long val = i * i;
       if(val <= n){
        ans = i;
       }
       else{
        break;
       }
    }
    return ans;
}
*/



int main(){
    int n = 28;

    cout<< "Peak element is: " << sqRoot(n);


}
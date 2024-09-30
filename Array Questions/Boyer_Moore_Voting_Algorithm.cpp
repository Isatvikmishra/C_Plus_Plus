/*

*->Initialize 2 variables:
    ?Count –  for tracking the count of element
    ?Element – for which element we are counting
*->Traverse through the given array.

!->If Count is 0 then store the current element of the array as Element.
*->If the current element and Element are the same increase the Count by 1.

!->If they are different decrease the Count by 1.
*->The integer present in Element should be the result we are expecting 

*/

//! TC: O(N)
//! SC: O(1)

#include<bits/stdc++.h>
using namespace std;

int findElement(vector<int> &a, int n){
    int ctr = 0;
    int el;

    for(int i = 0; i<n; i++){
        if(ctr == 0){
            ctr = 1;
            el = a[i];
        }
        else if(a[i] == el){
            ctr++;
        }
        else 
         ctr--;
    }

//Counting the element we found out.
    int ctr1= 0;
    for(int i = 0; i < n; i++){
        if(a[i] == el)
        ctr1++;
    }
// Checking if is actually greater than n/2;    
    if(ctr1 >= (n / 2))
    return el;

}

int main(){

    vector<int> a = {1,1,2,0,1,1};
    int n = a.size();

    int ans = findElement(a, n);

    cout << ans;
}
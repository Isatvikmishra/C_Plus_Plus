#include<bits/stdc++.h>
using namespace std;


int longestElement(vector<int> &arr, int n){
   
   /*
    unordered_set<int> st;
    for(int i =0; i<n; i++){
        st.insert(arr[i]);
    }
*/
    unordered_set<int> st(arr.begin(), arr.end());
    
    int longest = 1;

    for(auto it : st){
        if(st.find(it - 1) == st.end()){
            int ctr = 1;
            int x = it;

            while(st.find(x + 1) != st.end()){
                x = x+1;
                ctr +=1;
            }
            longest = max(longest, ctr);
        }
    }
    return longest;
}


//! TC: O(NlogN) + O(N), O(NLogN) is of sorting;
/*
int longestElement(vector<int> &arr, int n){
    int longest = 1; 
    int lastsmaller = INT_MIN;
    int ctr = 0;
    
    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        if(arr[i] - 1 == lastsmaller){
            ctr +=1;
            lastsmaller = arr[i];
        }

        else if(arr[i] != lastsmaller){
            ctr = 1;
            lastsmaller = arr[i];
        }

        longest = max(longest, ctr);    
    }
    return longest;
}
*/

//! TC: O(n) × O(n) = O(n^2)
/*
bool linearSearch(vector<int> &arr, int num){
    int n = arr.size();
    for(int i = 0; i<n; i++){
        if(arr[i] == num){
            return true;
        }
    }
    return false;
}

int longestElement(vector<int> &arr, int n){
    int longest = 1;

    for(int i = 0; i < n; i++){
        int x = arr[i];
        int ctr = 1;
        
        while(linearSearch(arr, x + 1) == true){
            x += 1;
            ctr +=1;
        }
    
        longest = max(longest, ctr);
    }
return longest;
}
*/


int main(){
    vector<int> arr = {100, 200, 1, 1, 1, 1, 2, 2, 2, 2, 23, 3, 3, 101, 3, 4, 6,5};
    int n = arr.size();

    int ans = longestElement(arr, n);
    
    cout << ans << " ";   
 

}
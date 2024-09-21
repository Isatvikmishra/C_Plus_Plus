
// Map stores all the value in sorted order.
//First preference should be unordered map to avoid O(N^2) time complex, if it gives Time limit exceed error then only switch to map because even if worst case happens it will have O(N) better than that hann.




#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    // Pre-compute
    // map <key(number), value(frequency)>
    // map <char , value(frequency)>
    // map<char, int>

    // map<int, int> mpp;
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

// How to iterate in map
    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;

    while(q--){
        int number;
        cin >> number;
        cout << mpp[number] << endl;

    }


}

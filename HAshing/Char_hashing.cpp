#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    //preCompute
    int hash[256] ={0};
    // 256 is no of ASCII values.
    for (int i=0; i<s.size();i++){
        hash[s[i]]++;
        // hash inside[] this needs int so it autocast to s[i]'s int value that is its ascii value.
    }

    int q;
    cin >> q;

    while(q--){
        char c;
        cin >> c;
        cout << hash[c];
    }



}
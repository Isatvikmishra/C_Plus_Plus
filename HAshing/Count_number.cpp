#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "array size:";
    cin >> n;

    int arr[n];
    //In int main you can only declare array till 10^6 only but can declare globally  till 10^7
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //preCompute
    int hash[13] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] +=1;

    }
    int q;
    cout << "size";
    cin >> q;

    while(q--){
        int number;
    // No's to check
        cin >> number;
        cout << hash[number] << endl;
    }

}
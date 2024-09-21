// Hashing is pre storing / fetching.
// Hashing is of three methods :
// Division Method: Here we take arr[i] % 10, modulus of 10 for eg we have to store 28, arr[28] % 10 = 8, so we can store it in 8 index instead of going to 28.
 
// Folding, Mid Square  

#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int n =4;
    int arr[] = {0,1,1,1,2};
    int ctr = 0;
    for(int i=0; i <= n; i++ ){
        if(arr[i] == num){
            ctr = ctr + 1;
        }
    }

    cout << num << " is there " << ctr <<" times.";
    return 0;


}
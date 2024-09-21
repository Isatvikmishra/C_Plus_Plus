#include <iostream>
using namespace std;


void One(int i, int sum){
    if (i<1){
    cout << sum << endl;
    return;
    }
    // cout << i << endl;
    One(i-1, sum+i);
}

//Functional Recurssion
int sumRec(int n){
    if (n==0) 
        return 0;
    return n + sumRec(n-1);
}

int main(){
    
    int n;
    cout << "Enter number";
    cin >> n;
    // One(n,0);
   

   cout << sumRec(n); 
    

}
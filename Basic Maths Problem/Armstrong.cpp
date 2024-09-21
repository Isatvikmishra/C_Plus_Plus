// sum of cube of individual number itself is armstrong.
// 371 = 3^3 + 7^3 + 1^3 = 371

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cout << "Enter number:"; 
    cin >> n;
    int dup = n;
    int sum = 0;
    while(n>0){
        int ld = n%10;
        sum = sum + (ld*ld*ld);
        n=n/10;
    }
    if (dup==sum){
        cout << "Armstrong number";
    }else{
        cout << "Not an Armstrong number";
    }


}

                                
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cout << "Enter Num";
    cin >> N;
    int counter= 0;
    int rev = 0;
    int dup = N; 
    while(N !=0){
        int ld = N % 10;
        rev = rev * 10 + ld;
        N = N/10;
        counter +=1;
    }
    cout << counter ; 
    // if (dup == rev){
    //     cout << "Palindrome";
    // }
    // else{
    //     cout << "Not Palindrome";
    // }

}
                                
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool palindrome(int N) {
    
    int revNum = 0;
    int dup = N;

    while(N > 0){
        int lastDigit = N % 10;
        revNum = (revNum * 10) + lastDigit;
        N = N/10;
    }

    if(dup == revNum){
        return true;
    } else {
        return false;
    }
  
    cout << "Number of digits: " << revNum << endl;
}

int main() {

    int N;
    cout<< "Enter Number:";
    cin >> N;

    if(palindrome(N)){
        cout << "Number is a palindrome" << endl;
    }
    else {
        cout << "Number is not a palindrome" << endl;
    }

    return 0;

}


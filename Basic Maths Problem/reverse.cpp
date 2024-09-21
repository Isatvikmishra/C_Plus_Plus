                                
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cout<< "Enter Number:";
    cin >> N;
    int revNum = 0;

    while(N > 0){
        int lastDigit = N % 10;
        revNum = (revNum * 10) + lastDigit;
        N=N/10;
    }
  
    cout << "Number of digits: " << revNum << endl;
    return 0;
}

//If number of iteration is based on division time complexity will be O(log())
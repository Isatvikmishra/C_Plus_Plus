                                
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countDigits(int n){
    int counter = 0;
    while (n > 0){
        counter += 1;
        n = n / 10;
    }
    return counter;
}

int main() {
    int N;
    cout<< "Enter Number:";
    cin >> N;

    int digits = countDigits(N);
    cout << "Number of digits: " << digits << endl;
    return 0;
}

//If number of iteration is based on division time complexity will be O(log())
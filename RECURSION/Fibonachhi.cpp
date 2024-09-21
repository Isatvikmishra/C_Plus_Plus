#include<iostream>
using namespace std;

// Function to calculate Fibonacci number recursively
int Fib(int n){
    if(n <= 1)  // F(0)=0, F(1)= 1 i.e. n
        return n;
    else
         return Fib(n-1) + Fib(n-2); //Here multiple recursion calls. 
        //If there are mul rec as above first one will executed than come back with result and then second one will execute.
}


int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Fibonacci number at position " << n << " is: " << Fib(n) << endl;

    return 0;
}
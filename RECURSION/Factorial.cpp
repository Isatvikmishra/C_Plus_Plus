#include <iostream>
using namespace std;


//Functional Recurssion
int Factorial(int n){
    if (n==0) 
        return 1; //Return 1 because at the end it will multiply it with zero so everything becomes 0 but here it will return 1.
    return n * Factorial(n-1);
}

int main(){
    
    int n;
    cout << "Enter number";
    cin >> n;
    // One(n,0);
   

   cout << Factorial(n); 
    

}
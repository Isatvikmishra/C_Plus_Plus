// Number that has two facors 1 & itself.
#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter number:"; 
    cin >> n;
    
    int counter =0;
    /*  BRUTE FORCE APPPROACH
    for (int i=1; i<=n; i++){
        if(n % i == 0 )
        counter +=1;
    }
    if (counter == 2)
    cout << n << " is a prime number";
    else
    cout << n << " is not a prime number";
    */
    // Optimal approach.    
    for(int i=1; i*i <= n; i++){

        if(n%i == 0){
            counter +=1;

            if((n/i) != i)
                counter +=1;
        }
    }
    if (counter == 2)
         cout << n << " is a prime number";
        else
        cout << n << " is not a prime number";
}

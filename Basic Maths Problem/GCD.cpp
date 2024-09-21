#include <iostream>
using namespace std;



int main(){
    int n1;
    int n2;
    cout << "Enter two number:"; 
    cin >> n1 >> n2;

// Using Euclidean Algorithm 
// gcd (a,b) = gcd(a-b, b) , a > b



    while(n1>0 && n2>0){
        if(n1>n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }
    if (n1==0) cout << n2;
    else cout << n1;   
} 
    
    
    
    
    
    
    
    
    
    
    
    /*
        for(int i=1; i <= min(n1,n2); i++)
        {
            if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
            }


        }
    */
    // or

    /*
        for(int i= min(n1,n2); i >= 1; i--){
            if(n1 % i == 0 && n2 % i == 0)
            {
            cout<< i;
            break;
            }
        }
    */    

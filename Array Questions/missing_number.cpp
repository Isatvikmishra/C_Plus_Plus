#include<bits/stdc++.h>
using namespace std;

int main(){
/*
! XOR Properties
*-> If we XOR(^) something with zero it will return same number.
?-> 5 ^ 0 = 5

*-> If we XOR two same numbers it will return 0.
?-> 5 ^ 5 = 0

*-> XORing two diff numbers will give nothing.
?-> 4 ^ 3 = ?

*/
    vector<int> arr = {0,1,3};
    int n = arr.size();
    int ans = 0;

    for(int i = 0; i <= n; i++){
        ans = ans ^ i;
    }
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
        
cout << ans;   

/*
!can be solved through this approach too. 
*first calculate the summation of first N natural numbers.(N*(N+1))/2

*   Assume the given array is: {1, 2, 4, 5} and N = 5.
*   Summation of 1 to 5 = (5*(5+1))/2 = 15
*   Summation of array elements = 12
*   So, the difference will be = 15 - 12 = 3. 
*   And the missing number is also 3.

*/


 /*

    ! O(n)
    int missing = arr[0];
    for(int i = 0 ; i < n; i++){
       while(arr[i] != missing){
        cout << missing << " ";
            missing++;
       }
       missing++;
    }
    ! O(n + m)
    */


}
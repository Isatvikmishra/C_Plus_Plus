#include <bits/stdc++.h>

using namespace std;

int main(){
    int day;
    cout << "Enter day:";
    cin >> day;
    
    switch (day){
        case 1:
        cout << "Monday";
        break;

        case 2:
        cout << "Tuesday";
        break;

        case 3:
        cout << "Wednesday";
        break;
    
        case 4:
        cout << "Thursday";
        break;

        default:
        cout << "Invalid day";

    }

    return 0;
}
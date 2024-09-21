#include<bits/stdc++.h>

using namespace std;

int main(){
/* Program that takes input of an age and prints of your are adult or not.
   
    int age;
    cout << "Please enter age:";
    cin >> age;

    if(age >= 18){ 
    cout<< "You are adult";
    }
    else{
    cout<< "You are not.";
    }

    return 0;
*/

// Ask user to input marks and tell what grade.

    int grade;
    cout << "Please enter marks:";
    cin >> grade;

    if(grade < 25){
        cout << "F";
    }
    else if(grade >= 25 && grade <= 44 ){
        cout << "E";
    }
    else if(grade >= 45 && grade <= 49 ){
        cout << "D";
    }
    else if(grade >= 50 && grade <= 59 ){
        cout << "C";
    }
    else if(grade >= 60 && grade <= 79){
        cout << "B";
    }
    else if(grade >= 80){
        cout << "A";
    }
    return 0;
}
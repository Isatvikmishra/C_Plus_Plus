#include<bits/stdc++.h>
using namespace std;

//VOID -> which does not return anything.
//RETURN
//Parameterized & NON
//Pass By reference: gets the value by index and then changes the value of it. Can be used by using & sign in the parameters
// Arrays automatically passed with the references we don't do that by ourselves for rest we use & sign for vectors strings etc.



/*
    void printName(string name){
        cout << "Hey, " << name;
    }


    int main(){
        string name;
        cout << "Enter Your Name";
        cin >> name;
        printName(name);
        return 0;
    }
*/
int addNum(int x, int y){
    int num3 = x + y;
    return num3;
}
int main(){
    int x,y;
    cout << "Enter numbers to add:";
    cin >> x >> y;
    int result = addNum(x,y);
    cout << result;
    return 0;
}
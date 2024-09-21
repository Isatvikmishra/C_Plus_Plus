#include <iostream>

using namespace std;

bool reverse(int i,string &s){
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;
    return reverse(i+1, s);
}

int main(){

    string s;
    cin >> s; 
   
    bool ans = reverse(0,s);
    
    if(ans == true){
        cout << "Is palindrome";
    }
    else{
        cout << "Is not palindrome";
    }

}
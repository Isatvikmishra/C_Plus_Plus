#include <iostream>
#include<bits/stdc++.h>
using namespace std;


class MinStack {
private:
    std::stack<std::pair<int, int>> st; // Stack to store pairs of (value, current minimum)
    
public:
    MinStack() {}

    void push(int val) {
        int mini;
        if (st.empty()) {
            mini = val; // If stack is empty, the current value is the minimum
        } else {
            mini = std::min(val, st.top().second); // Compare with current minimum
        }
        st.push({val, mini}); // Push the value and the updated minimum as a pair
    }
    
    void pop() {
        st.pop(); // Remove the top element
    }
    
    int top() {
        return st.top().first; // Return the value at the top of the stack
    }
    
    int getMin() {
        return st.top().second; // Return the minimum stored with the top element
    }
};



int main() {
    MinStack* minStack = new MinStack();

    minStack->push(5);
    minStack->push(3);
    minStack->push(7);

    cout << "Current minimum: " << minStack->getMin() << endl;

    cout << "Top element: " << minStack->top() << endl;
        minStack->pop();
    cout << "Top element after pop: " << minStack->top() << endl;
    cout << "Current minimum after pop: " << minStack->getMin() << endl; 
    
    minStack->push(2);
    cout << "Current minimum after pushing 2: " << minStack->getMin() << endl; 
    
    delete minStack;

    return 0;
}
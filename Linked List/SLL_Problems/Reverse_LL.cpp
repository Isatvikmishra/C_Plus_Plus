#include<bits/stdc++.h>
using namespace std;

class Node {
public:

    // Data stored in the node
    int data;  
    
     // Pointer to the next node in the list
    Node* next;     

    // Constructor with both data
    // and next node as parameters
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data as
    // a parameter, sets next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


//!  Time Complexity: O(N) && SC: O(1)

Node* reverse(Node* head){

    Node* temp = head;

    // Initialize pointer 'prev' to NULL,
    // representing the previous node
    Node* prev = NULL;

    while( temp != NULL){

        // Store the next node in
       // 'front' to preserve the reference
        Node* front = temp->next;

        // Reverse the direction of the
        // current node's 'next' pointer
        // to point to 'prev'
        temp->next = prev;
        
        // Move 'prev' to the current
        // node for the next iteration
        prev = temp;

        
        // Move 'temp' to the 'front' node
        // advancing the traversal
        temp = front;

    }

    //Prev is new head
    return prev;

}


//!  Time Complexity: O(2N) ~ (N) && SC: O(N)
/*
Node* reverse(Node* head){

    Node* temp = head;

    stack<int> st;

    while(temp != nullptr){
        st.push(temp->data);        // Push the data to the stack
        temp = temp->next;
    }

    temp = head;

    while(temp != nullptr){

        temp->data = st.top();    // Set the current node's data to the value at the top of the stack
        st.pop();                // Pop the top element from the stack


        temp = temp->next;
    }

return head;
}
*/

int main(){
 Node* head = new Node (1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    Node* reversed = reverse(head);
    printLinkedList(reversed);

}
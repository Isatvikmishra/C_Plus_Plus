#include<iostream>
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

bool isPalindrome(Node* head){
    stack<int> st;
    Node* temp = head;
    
    //Traversing the Linked List
    while(temp != NULL){

       st.push(temp->data);
       temp = temp->next;
    
    }

    //resetting the head
    temp = head;

    //chexcking
    while(temp != NULL){
        
        //temp is not equals to stack it means not palindrome as stack stores in LIFO.
            if(temp->data != st.top()){
                return false;            
            }

        //It means one el same so take it out to change next one.    
        st.pop();
        temp = temp->next;     

    }
    

return true;
}


void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list with
    // values 1, 5, 2, 5, and 1 (15251, a palindrome)
    Node* head = new Node(1);
    head->next = new Node(5);
    head->next->next = new Node(2);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(1);

    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Check if the linked list is a palindrome
    if (isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}
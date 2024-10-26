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

void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

//! Time Complexity: O(N + N/2)
/*
Node* deleteMiddle(Node* head){
    Node* temp = head;
    int n = 0;

    while(temp!= NULL){
        n++;
        temp = temp->next;
    }

    temp = head;
    int res = n/2;

    while(temp!= NULL){
        res--;

        // if middle node is found
        if(res == 0){

            //create a middle node
            Node* middle = temp->next;

            //link prev to next 
            temp->next =  temp->next->next;

            delete(middle);
            //delete middle
            break;
        }
        temp = temp->next;

    }

    return head;
    

}
*/

//! TC: O(n/2)
Node* deleteMiddle(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node* slow = head;
    Node* fast = head;
    fast = head->next->next; // We did this to get slow on one before of middle node so we move fast first before even starting.


//In even fast will be at null whereas in ODD its at last element whose next is null.

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    slow->next = slow->next->next;

    return head;
}


int main(){
    Node* head = new Node (1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    cout << "Original LL: ";
    printLL(head);

    cout << "Deleted LL: ";
    head = deleteMiddle(head);

    printLL(head);
}
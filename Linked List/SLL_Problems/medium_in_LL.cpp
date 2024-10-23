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



Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;

//In even fast will be at null whereas in ODD its at last element whose next is null.

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

//! TC: O(N + N/2)
/*
Node* findMiddle(Node* head){
    
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* temp = head;
    int ctr = 0;

    while(temp != NULL){
        ctr++;
        temp = temp->next;
    }

    int mid = ctr / 2 + 1;
    temp = head;

    while(temp != NULL){
       mid = mid - 1;
            if(mid == 0){
                break;
            }
        temp = temp->next;
    }
return temp;
}
*/

int main(){
    Node* head = new Node (1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

   Node* middleNode = findMiddle(head);

   cout << middleNode->data;
}
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

//!Turtoise & Hare TC: O(N) & SC: O(1) 
bool detectLoop(Node* head){

    Node* fast = head;

    Node* slow = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;

        //if there will be a loop slow and fast will become equal at a point.
        // if fast reaches end of list no loop
        if(slow == fast){
            return true;
        }

    }
    return false;


}

//!TC: O(N2log(N)) && SC: O(N)
/*
bool detectLoop(Node* head){
    Node* temp = head;

    unordered_map<Node*, int>mpp;

    while(temp!=NULL){

        //* If the node is already in the
        //* map, there is a loop
        if(mpp.find(temp) != mpp.end()){
            return true;
        }

        mpp[temp] = 1; //* Store current node in map
        temp = temp->next;
    }
    return false;

}
*/

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     // Create a loop
    fifth->next = third; 


    if(detectLoop(head)){
        cout << "Loop detectd"; 
    }
    else{
        cout << "Loop not";
    }

}
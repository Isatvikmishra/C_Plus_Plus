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

//! TC: O(N) & O(1);
Node* detectLoop(Node* head){
    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;


        //If slow and fast met loop detected
        if(slow == fast){

            //reset slow to head
            slow = head;

                //If slow is equals to fast it means they are at starting postition or head.
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
            return slow;
        }
    }
    return NULL;
}

/*
Node* detectLoop(Node* head){
    Node* temp = head;

    unordered_map<Node*, int>mpp;

    while(temp!=NULL){

        //* check if temp has been encountered again
        if(mpp.count(temp) != 0){
            return temp;
        }

        mpp[temp] = 1; //* Store current node in map
        temp = temp->next;
    }

    return nullptr;

}
*/

int main(){
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* head = node1;

    node1-> next = node2;
    node2-> next = node3;
    node3->next = node4;
    node4-> next = node5;
    // Make a loop from node5 to node2
    node5->next = node2;


   

    Node* LoopVal = detectLoop(head);

    if(LoopVal){
        cout << "Loop detectd & Starting node of the loop is: " << LoopVal->data; 
    }
    else{
        cout << "Loop not";
    }

}
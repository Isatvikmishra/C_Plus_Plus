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

void printLL(Node* head){
    Node* temp = head;

    while(temp!= NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
        cout << "\n";
}

//! Time Complexity: O(N) + O(N log N) + O(N)
/*
Node* sortLL(Node* head){
    vector<int>arr;
    Node* temp = head;
   

    while(temp!= NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }

    sort(arr.begin(), arr.end());
    temp = head;

    for(int i = 0; i<arr.size(); i++){
        temp->data = arr[i];
        temp = temp->next;
    }

    return head;

}
*/

int main(){
     Node* head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(5);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(1);

    cout << "Original Linked List: ";
    printLL(head);

    // Sort the linked list
    head = sortLL(head);

    cout << "Sorted Linked List: ";
    printLL(head);

    return 0;
}
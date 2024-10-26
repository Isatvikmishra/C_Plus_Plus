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

Node* deleteNodeFromLast(Node* head, int N){
    if(head == NULL) return head;
    
   
    int ctr = 0;
    Node* temp = head;

    while(temp!= NULL){
        ctr++;
        temp = temp->next;

    }
    
   
    //If N equals the total number of
    // nodes, delete the head
    if (ctr == N) {
        Node* newhead = head->next;
        delete (head);
        return newhead;
    }


    // Calculate the position of the node to delete (res)
    int res = ctr - N;
    temp = head;
    
    // Traverse to the node just before the one to delete
    while(temp != NULL){
        res--;
            if(res == 0){
                break;
            }
        temp = temp->next;
    }

    // Delete the Nth node from the end
    Node* delNode = temp->next;
    temp->next = temp->next->next;
    delete (delNode);
    return head;

}

int main(){
    Node* head = new Node (1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int N = 3;

    Node* del = deleteNodeFromLast(head, N);
    printLL(del);

}
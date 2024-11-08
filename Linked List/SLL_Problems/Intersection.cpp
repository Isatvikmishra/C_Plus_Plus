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

void insertNode(Node* &head,int val) {
    Node* newNode = new Node(val);
    
    if(head == NULL) {
        head = newNode;
        return;
    }
    
    Node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}

void printList(Node* head) {
    while(head->next != NULL) {
        cout << head->data << "->";
        head = head->next;
    } 
    cout << head->data <<endl;
}


Node* intersectionPresent(Node* head1, Node* head2){
    Node* A = head1;
    Node* B = head2;

    while(A != B){
        
        //A is null then we point to to head2
        if(A == NULL){
            A = head2;
        }
        //or we keep going next
        else{
            A = A->next;

        }
        if(B==NULL){
            B = head1;
        }
        else{
            B = B->next;
        }
    }

    return A;


}


int main() {
    // creation of both lists 
    Node* head = NULL;

    insertNode(head,1);
    insertNode(head,3);
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,4);

    Node* head1 = head;
    head = head->next->next->next;
    Node* headSec = NULL;

    insertNode(headSec,3);
    Node* head2 = headSec;
    headSec->next = head;

    //printing of the lists
    cout<<"List1: "; printList(head1);
    cout<<"List2: "; printList(head2);

    //checking if intersection is present
    Node* answerNode = intersectionPresent(head1,head2);

    if(answerNode == NULL )
        cout<<"No intersection\n";
    else
        cout<<"The intersection point is " << answerNode->data<<endl;

    return 0;
}
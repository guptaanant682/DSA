#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    
    //implementing the linked list using constructor
    Node(int data){
        this-> data = data;
        this -> next = NULL;
    }
};

//insertion at head
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp-> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node* &head, int position, int d){
    Node* temp = head;

    int count= 1;

    while(count<position-1){
        temp = temp->next;
        count++;
    }
    //creating a node for d

    Node* nodeToInsert = new Node(d);
    
    nodeToInsert->next =temp->next;
    temp->next = nodeToInsert;

}

//to print the complete list
void print(Node* &head){
    Node* temp = head;

    while(temp!= NULL){
        cout<<temp->data<< " ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    Node* node1 = new Node(10);
    cout <<node1 -> data << endl;//printing the data of the node
    cout <<node1 -> next << endl;//printing the address of another node

    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 12);//invoking the insert at head function
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail, 25);//invoking the insert at tail function
    print(head);

    insertAtPosition(head, 3,22);
    print(head);

    return 0;
}

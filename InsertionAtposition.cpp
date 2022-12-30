#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
 
    }

};
//to insert the node
/*void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

}*/
//to insert node at tail
void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}

// to  print or transverse the node
void print(Node* head){
Node* temp=head;

    while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
} 
cout<<endl;
 
}
//to insert the element at kth node
void insertAtPosition(Node* head,int position,int d){
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
    temp=temp->next;
    cnt++;
    }
      Node* nodeToInsert=new Node(d);

      nodeToInsert->next=temp->next;
      temp->next=nodeToInsert;


}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtPosition(head,3,73);
    print(head);

}

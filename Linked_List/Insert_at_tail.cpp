#include<iostream>
using namespace std;
class Node
{
     public:
     int data;
     Node *next;
     Node()
     {
          this->data = 0;
          this->next = NULL;
     }
     Node(int data)
     {
          this->data = data;
          this->next = NULL;
     }
};
// I want to insert a node right at the end of LINKED LIST
void InsertAtHead(Node* &head, Node* &tail, int data)
{
     // step1: create a node
     Node* newNode = new Node(data);
     // step2: connect with tail node
     newNode ->next = head;
     // step3: 
     if(head == NULL)
     {
          // LL->empty list, first node ab add hogi
          tail = newNode;
     }
     // update the tail
     head = newNode;
}
// I want to insert a node right at the end of LINKED LIST
void InsertAtTail(Node* &head, Node* &tail, int data)
{
     // step1: create a node
     Node* newNode = new Node(data);
     // step2: connect with tail node
     if(tail == NULL)
     {
          // First node ab add hoga
          tail = newNode;
          head = newNode;
     }
     else
     {
          // LL is non-empty 
       tail->next = newNode;
     }
     // update the tail
     tail = newNode;
}
void print(Node* head)
{
     Node* temp = head;
     cout<<"Insertion on the tail part:"<<endl;
     while(temp!=NULL)
     {
          cout<<temp->data<<" ";
          temp = temp -> next;
     }
}
int main()
{
     Node* head = NULL;
     Node* tail = NULL;
     InsertAtHead(head, tail, 20);
     InsertAtHead(head, tail, 60);
     InsertAtHead(head, tail, 80);
     InsertAtHead(head, tail, 90);
     InsertAtHead(head, tail, 100);
     InsertAtTail(head, tail, 120);
     print(head);
     return 0;
}

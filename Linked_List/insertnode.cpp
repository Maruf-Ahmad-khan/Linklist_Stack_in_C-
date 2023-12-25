#include <iostream>
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
void insertAtHead(Node *&head, int data)
{
     // Step->1
     // create a node
     Node *newNode = new Node(data);
     // Step->2
     // point the next
     newNode->next = head;
     // step ->3
     // update the node 
     head = newNode;
}
void print(Node *head)
{
     Node *temp = head;
     cout <<"The inseted linked list is :"<<endl;
     while (temp != NULL)
     {
          cout << temp->data <<" ";
          temp = temp->next;
     }
}
int main()
{
     Node *head = new Node(10);
     insertAtHead(head, 20);
     insertAtHead(head, 50);
     insertAtHead(head, 60);
     insertAtHead(head, 80);
     insertAtHead(head, 90);
     print(head);
     return 0;
}
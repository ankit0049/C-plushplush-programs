#include<iostream>
using namespace std;

class Node{ 
    public:
    int data;
    Node* pre;
    Node*next;
    Node (int data)
    {
        this->data=data;
        this->pre=NULL;
        this->next=NULL;
    }
};
 void insertHead(Node* & head,  Node* &tail, int d)
 { 
    if(head==NULL)
    { Node* temp= new Node(d);
        head=temp;
        tail=temp;
    } 
    else{
    Node* temp= new Node(d);
    temp->next=head;
    head->pre=temp;
    head=temp; 
    }

 }  
  
  void insertTail(Node* &tail,Node* &head, int d)
  { if(tail==NULL)
  {
    Node* temp=new Node(d);
    tail=temp;
    head=temp;
  }
    Node* temp= new Node(d); 
    tail->next=temp;
    temp->pre=tail;
    tail=temp;

  } 

  void insertPos(Node* &tail , Node* &head , int pos , int d)
  { if(pos==1)
  {
    insertHead(head,tail,d);
    return;
  } 
  Node* temp=head;
  int cnt=1;
  while(cnt<pos-1)
  { cnt++;
    temp=temp->next;

  }
  if(temp->next==NULL)
  {
    insertTail(tail,head ,d);
    return;
  } 
   Node* Pos = new Node(d);
   Pos->next=temp->next;
   temp->next->pre=Pos;
     temp->next=Pos;
     Pos->pre=temp;


  }

void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<< temp->data << "  ";
        temp=temp->next;
    } 
    cout<< endl;
}
int main()
{
  Node* temp = new Node(6);
 Node* head= temp; 
 Node* tail= temp;
   print (head); 

   insertHead(head,tail,9);
   print(head); 

   insertTail(tail,head,78);
   print(head); 

   insertPos(tail,head,3,90);
   print(head); 

   insertPos(tail,head,2,98);
   print(head); 

   insertPos(tail,head,6,404);
   print(head); 

   insertPos(tail,head,1,69);
   print(head);
}
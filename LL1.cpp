#include<iostream>
using namespace std ; 
class  Node {  public:
    int data;
    Node* next; 
    Node(int data)
    {
        this->data=data;
         this->next=NULL;
    } 

    ~Node()
    {
        int value= this->data;
        while(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
    }

};   

// this is for insrting at head 

void insertHead(Node* &head, int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

}  

// this is inserting for tail

void insertTail(Node* &tail, int d)
{
    Node* temp= new Node(d);

    tail->next= temp;
    tail=temp;
 
    
} 

 // this is for Inserting mid  
 void insertMid(Node* &tail,Node* &head, int pos,int d)
 {
    Node* temp =head; 
    if(pos==1)
    { 
      insertHead(head,d);
      return;
    }  
    if( temp->next==NULL)
    {
        insertTail(tail,d);
        return ;
    }
    int c=1;
    while(c<pos-1)
    {
        temp=temp->next;
        c++;
    } 
 
    Node* inset= new Node(d);
    inset->next=temp->next; 
    temp->next=inset;

 } 
 void deleteNode(Node* &head,int pos)
 {
   if(pos==1)
   {
    Node* temp= head;
    head=head->next;
    temp->next=NULL;
    delete temp;
   } 

   else{
     Node* pre=NULL;
     Node* curr=head;
     int cnt=1;
     while(cnt<pos)
     {   cnt++;
        pre = curr;
        curr=curr->next;

     } 
     pre->next=curr->next;
     curr->next=NULL;

      delete curr;
   }
 }

void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
       cout<< temp->data << " ";
       temp = temp->next;
    }  
    cout<< endl;
}
int main()
{
     Node* node1= new Node(8);   
     Node* head=node1;
     Node* tail=node1;

    insertHead(head,9);
    
    insertTail(tail,69);

    insertMid(tail,head,1,78);
    print(head); 
    deleteNode(head,4);
    print(head);
        



}
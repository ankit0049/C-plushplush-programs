#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

node* buildTree(node* root)
{
    cout<<"enter data "<<endl;
    int data;
    cin>>data;

    root=new node(data);

    if(data==-1)
    return NULL;

    cout<<"enter data to insert in left of "<<data<<endl;

    root->left=buildTree(root->left);


    cout<<"enter data to insert in right of "<<data<<endl;
    root->right=buildTree(root->right);

    return root;
}


int main()
{
    node* root=NULL;

    root=buildTree(root);
}
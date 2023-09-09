#include<iostream>

using namespace std;


//creating tree

struct node{

int data;

struct node *left, *right;

};

//function to create a tree
struct node  *create(){
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));

    cout<<"enter the parent node data: "<<endl;
    cin>>x;
//base condition for ending recursion call
if (x==-1) return 0;


    newnode->data=x;

    cout<<"enter the value of left child"<<endl;

    newnode->left=create();
    
    
    cout<<"enter the value of right child"<<endl;
    
    newnode->right=create();
    
    return newnode;

}



//Preorder traversal

void preorder(node *root){

if(root==0) return;

cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);



}

// Inorder traversal

void inorder(node *root){

if(root==0)return;

preorder(root->left);
cout<<root->data<<" ";
preorder(root->right);

}

void postorder(node *root){
    if(root==0)return;

    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";

}

int main(){
    cout<<endl;

cout<<"Enter '-1' to enter null value to node." <<endl;

struct node *root;

root=create();

cout<<endl;

int x;


cout<<"Which traversal to perform \n"
<<"1. Preorder \n"
<<"2. Inorder \n"
<<"3. Postorder \n";

cin>>x;

switch(x){
    case 1:
    preorder(root);
    break;

    case 2:
    inorder(root);
    break;

    case 3:
    postorder(root);
    break;
}
cout<<endl;


return 0;


}
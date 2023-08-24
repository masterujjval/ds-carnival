#include <iostream>
using namespace std;

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

//funtion to traverse a tree
void traverse(struct node *temp){

if(temp==NULL){
    return;
}
//just remove the comments and replace those comments with the follow up code to get the desired traversal method

//preorder traversal cout<<"temp->data<<"-> ";

traverse(temp->left);

cout<<temp->data<<"-> "; //inorder traversal

traverse(temp->right);

// post-order traversal cout<<temp->data<<"-> ";

}




int main(){
struct node *root;
root=0;
root =create();

struct node *temp=root;
cout<<endl;
traverse(temp);
cout<<endl;


    return 0;
}
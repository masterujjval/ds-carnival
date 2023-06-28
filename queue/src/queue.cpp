//============================================================================
// Name        : queue.cpp
// Author      : Zoro
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//queue follows the rule of first in first out (FIFO)
struct node{
	int data;
	struct node* next;

};
struct node *head=0;
struct node *tail=0,*temp;



void insert(){

	//Here asking for number of nodes user wants

	int choice;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n"
			<<"                                            \n"

			<<"Enter the number of node uh want "
			<<"                                              \n"
			<<"                                               \n"
			<<"++++++++++++++++++++++++++++++++++++++++++++++++\n"
			;
cout<<">>> ";

	cin>>choice;

	while(choice){
	struct node *newnode;
	newnode = new node;
	cout<<"Enter data : "<<endl;
	cin>>newnode->data;
	newnode->next=0;

	if(head == 0 && tail==0){
		head=newnode;
		tail=newnode;
	}
	else{
		tail->next =newnode;
		tail=newnode;

	}
choice--;
}}

void display(){
	cout<<endl;
	temp=head;
	while(temp->next!=0){
		cout<<temp->data<<"-> ";
		temp=temp->next;
	}
	cout<<temp->data<<endl;
}

void del(){
	cout<<endl;
	cout<<"Do uhh want to delete a node 0 or 1"<<endl;
	cout<<"++++++++++++++++++++++\n"
		<<"                       \n"
		<<"0 means NOOO hell noo!!\n"
		<<"1 means ohhh yeahhhhhh!!\n"
		<<"                         \n"
		<<"++++++++++++++++++++++++++\n"
		<<endl;
	cout<<">>> ";
	int choice;
	cin>>choice;
	while(choice){
	struct node *store=head;
	head=head->next;
	free(store);
	display();

	cout<<"Do uhh want to delete a node AGAIN??? 0 or 1"<<endl;
	cout<<"++++++++++++++++++++++\n"
		<<"                       \n"
		<<"0 means NOOO hell noo!!\n"
		<<"1 means ohhh yeahhhhhh!!\n"
		<<"                         \n"
		<<"++++++++++++++++++++++++++\n"
		<<endl;
	cout<<">>> ";cin>>choice;

	}
	cout<<"Successfully executed :"<<endl;
     cout<<"\n▕▔╲┊┊┊┊┊┊┊┊┊╱▔▏\n"
<<"┊╲┈╲╱▔▔▔▔▔╲╱┈╱\n"
<<"┊┊╲┈╭╮┈┈┈╭╮┈╱┊\n"
<<"┊┊╱┈╰╯┈▂┈╰╯┈╲┊\n"
<<"┊┊▏╭╮▕━┻━▏╭╮▕┊\n"
<<"┊┊╲╰╯┈╲▂╱┈╰╯╱┊\n";
}










int main(){


insert();
display();

del();




	return 0;



}



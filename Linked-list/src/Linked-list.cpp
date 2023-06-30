//============================================================================
// Name        : Linked-list.cpp
// Author      : Zoro
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<unistd.h>
#include<cstdlib>
using namespace std;
//All other data structures like stack, queue are implemented using linked list but. they follow the concept of LIFO(last in first out), and FIFO(first in first out)
//Link list have two pointers one head pointer and one tail pointer.
//We can perform insertion and deletion operation !) at beginning 2)at end 3)at any specific position

//just for fun
void anime(){
	string s=" \"If you don’t take risks, you can’t create a future!” — Monkey D. Luffy (One Piece)";
	for(int i=0;i<s.length();i++){
		cout.flush();
		usleep(100000);
		cout<<s[i];
	}
	cout<<endl;


}








//1)at end
struct node {
	int data;
	struct node *next;
};
struct node *head=0,*tail=0;

void push(){
	int x;
	cout<<">>> ENTER THE NUMBER OF CHAMBERS YOU WANT TO CREATE :  ";
	cin>>x;
	cout<<endl;
	while(x){
		struct node *newnode;
		newnode=new(node);
		cout<<"CHAMBER NUMBERS : ";
		cin>>newnode->data;
		newnode->next=NULL;

		if(head==0){
			head= newnode;
			tail=newnode;

		}
		else{
			tail->next=newnode;
			tail=newnode;
		}

x--;
	}



}

void display(){
	struct node *temp=head;
	cout<<">>> DO YOU WANT TO DISPLAY CHAMBERS NUMBER WITH THEIR RESPECTIVE ADDRESSES ?\n :- (y OR n ) : ";
	char n;
	cin>>n;
	if(n=='y'){
		cout<<"head chamber contains :-"<<"|"<<head->data<<"|"<<head->next<<"|"<<endl;
		cout<<endl;
		cout<<"YOUR LINKED LIST LOOKS LIKE THIS HOMIEE -: "<<endl;
cout<<'\n';
	while(temp->next!=NULL){
cout<<"| "<<temp->data<<" | "<<temp->next<<" |"<<"--->";

		temp=temp->next;
	}
	cout<<"| "<<temp->data<<" | " <<temp->next<<" |";
}else{
	cout<<"YOUR LINKED LIST LOOKS LIKE THIS HOMIEE -: "<<endl;
	cout<<'\n';
	while(temp->next!=NULL){
cout<<"| "<<temp->data<<" |--->";

		temp=temp->next;
	}
	cout<<"| "<<temp->data<<" |";


}

}

void del(){
	cout<<">>> DO YOU WANT TO DELETE A CHAMBERS FROM THE END : y OR n : ";
	char a;
	cin>>a;
struct node *temp,*prenode;//here we have to create two pointer where one keeps the record of previous node and then deallocate the last node.

//starting from head because we only know the head pointer, the starting address thus it is important to create head pointer, after which we can traverse the whole list

while(a=='y'){
	temp=head;
while(temp->next!=0){

	prenode=temp;//this would keep the record of last second node i.e node-1. so we can free the last node
	temp=temp->next;//this temp pointer would point at the last node and we will free this pointer.

}
	if(temp==head){head=0;a='n';}//this means list has only one node
	else{
		prenode->next=0;//now to free the last node we have to give a null address to the last second node because it contains the address of the last node.

		free(temp);//here we deallocated the memory or the last node or node at the end
	}
	string s="DONE.....";
	for(int i=0;i<s.length();i++){
		cout.flush();
		usleep(100000);
		cout<<s[i];


	}
	cout<<'\n';
	cout<<">>> DO YOU WANT STILL WANT TO DELETE A CHAMBER AND FREE THE NUMBER OF PEOPLE IN IT ? (y OR n) : ";
	cin>>a;

}

}







int main() {
anime();
cout<<endl;

	push();
cout<<endl;
	display();cout<<endl;

cout<<'\n';
del();
cout<<'\n';

display();
cout<<'\n';
	cout<<"\n▕▔╲┊┊┊┊┊┊┊┊┊╱▔▏\n"
	<<"┊╲┈╲╱▔▔▔▔▔╲╱┈╱\n"
	<<"┊┊╲┈╭╮┈┈┈╭╮┈╱┊"<<"   download the handwritten notes by clicking on the folder\n"
	<<"┊┊╱┈╰╯┈▂┈╰╯┈╲┊\n"
	<<"┊┊▏╭╮▕━┻━▏╭╮▕┊\n"
	<<"┊┊╲╰╯┈╲▂╱┈╰╯╱┊\n";


	return 0;
}

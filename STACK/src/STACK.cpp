//============================================================================
// Name        : STACK.cpp
// Author      : Zoro
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<unistd.h>
#include<cstdlib>
using namespace std;
//FIRST-> defining a node, which values will node hold by using struct data structure
struct node {

	int data;
	struct node *next=0; //a pointer which will hold the address of another node. In dynamic programming we use address and hold and pass addresses using pointers rather than by their name like we do with array.


};
struct node *top=0; // a top pointer which have initail vlaue 0. Top will hold the address of a node which. Specifically those node we created using "struct node".

void anime(){
	string s=" \"When you give up, that’s when the game ends.” — Mitsuyoshi Anzai (Slam Dunk)";
	for(int i=0;i<s.length();i++){
		cout.flush();
		usleep(100000);
		cout<<s[i];
	}
	cout<<endl;


}










void push(){
int x;
cout<<">>> ENTER NUMBER OF NODES YOU WANT TO CREATE : ";cin>>x;

	while(x){
	struct node *newnode;//Here, we created a pointer name newnode. as this is a pointer it can only store address. To make this pointer to store some value and data we have to define its size.

	newnode=new(node);//now newnode can store data and address both because now it has sufficient storage for holding both parameters. As we already define in "Struct node".


cout<<"ENTER THE DATA OF THE NODE : ";

	cin>>newnode->data;
	newnode->next=top;
	top=newnode;

	x--;
	}
}


void display(){
	struct node *temp=top;
	cout<<"YOUR STACK LOOK LIKE THIS HOMIEE : "<<endl;
	while(temp->next!=0){



		cout<<"||||                  ||||\n";
		cout<<"||||       "<<temp->data<<"         ||||\n";
		cout<<"||||__________________||||\n";

temp=temp->next;
	}
	cout<<"||||                  ||||\n";
	cout<<"||||       "<<temp->data<<"         ||||\n";
		cout<<"||||__________________||||\n";

cout<<"\n▕▔╲┊┊┊┊┊┊┊┊┊╱▔▏\n"
<<"┊╲┈╲╱▔▔▔▔▔╲╱┈╱\n"
<<"┊┊╲┈╭╮┈┈┈╭╮┈╱┊"<<"   download the handwritten notes by clicking on the folder\n"
<<"┊┊╱┈╰╯┈▂┈╰╯┈╲┊\n"
<<"┊┊▏╭╮▕━┻━▏╭╮▕┊\n"
<<"┊┊╲╰╯┈╲▂╱┈╰╯╱┊\n";


}









int main() {
anime();
cout<<"\n";
push();
cout<<"\n";
display();


	return 0;
}

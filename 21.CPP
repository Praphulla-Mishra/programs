#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;

void insert(int);
void del();
void display();

void main()
{
   int choice, value;
   clrscr();
   cout<<"\n Queue Implementation using Linked List \n";
   while(1){

      cout<<"1. Insert\n2. Delete\n3. Display\n4. Exit\n";
      cout<<"Enter your choice: ";
      cin>>choice;
      switch(choice)
      {
	 case 1: cout<<"Enter the value to be insert: ";
		 cin>>value;
		 insert(value);
		 break;
	 case 2: del(); break;
	 case 3: display(); break;
	 case 4: exit(0);
	 default: cout<<"\nWrong selection!!! Please try again!\n";
      }
   }
}
void insert(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
   cout<<"\nInsertion is Success!\n";
}
void del()
{
   if(front == NULL)
      cout<<"\nQueue is Empty!!!\n";
   else{
      struct Node *temp = front;
      front = front -> next;
      cout<<"\nDeleted element:\n";cout<<temp->data;
      free(temp);
   }
}
void display()
{
   if(front == NULL)
      cout<<"\nQueue is Empty!\n";
   else{
      struct Node *temp = front;
      while(temp->next != NULL)
      {
	 cout<<"--->";cout<<temp->data;
	 temp = temp -> next;
      }
      cout<<"--->NULL\n";cout<<temp->data;
   }
}
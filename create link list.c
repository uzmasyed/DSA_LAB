//CREATE LINKED LIST
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL; 
//=========================CREATE FUNCTION FOR CREATE A LINKED LIST==========================
void create()
{
int ch;
struct node *newnode,*current;
do
{
	newnode=(struct node*)malloc(sizeof(struct node));           //DYNAMIC MEMORY ALLOCATION
	printf("enter data part\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
		current=newnode;
	}
	else
	{
		current->next=newnode;
		current=newnode;
	}
	printf("enter your choice\n");
	ch=getche();           
	
	}while(ch!='n');         //IF YOU WANT TO EXIT PRESS n
}
//==============================DISPLAY FUNCTION FOR DISPLAY LINKED LIST===========================================
void display()
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
//========================================MAIN FUNCTION=============================================================
int main()
{
	create();           //CALL CREATE FUCTION
	display();          //CALL DISPLAY FUNCTION

}  //END OF MAIN FUCTION

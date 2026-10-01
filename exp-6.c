#include<stdio.h>
#include<stdlib.h>
 struct node{
 	int data;
 	struct node *next;
 };
 int main()
 {
 	struct node *head, *newnode, *temp;
 	int n,i;
 	head = NULL;
 	printf("Enter number of node");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		newnode=(struct node*)malloc(sizeof(struct node));
 		
 		printf("data elements:");
 		scanf("%d",&newnode->data);
 		
 		newnode->next=NULL;
	 
	 if(head== NULL)
	 {
	 	head=newnode;
	 	temp=newnode;
	 	
	 }
	 else
	 {
	 	temp->next=newnode;
	 	temp=newnode;
	 }
}
	 temp->next=head;
 	
  printf("CIRCULAR LINKED LIST:\n");
 temp=head;
  do
  {
  	printf("%d->",temp->data);
  	temp=temp->next;
  }
  while(temp!=head);
  
  	printf("Back to head");
  	
  
    return 0;
}

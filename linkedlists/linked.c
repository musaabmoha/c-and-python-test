#include <stdio.h>
#include <stdlib.h>

int main() 
{
    // Write C code here
    struct node
    {
        int data;
        struct node *link;
    };
    
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    
    struct node *current = NULL;
    current = malloc(sizeof(struct node));
    current->data = 19;
    current->link = NULL;
    head->link = current;
    
    struct node *current2 = NULL;
    current2 = malloc(sizeof(struct node));
    current2->data = 21;
    current2->link = NULL;
    head->link->link = current2;
    
    struct node *current3 = NULL;
    current3 = malloc(sizeof(struct node));
    current3->data = 27;
    current3->link = NULL;
    head->link->link->link = current3;
    
    struct node *current4 = NULL;
    current4 = malloc(sizeof(struct node));
    current4->data = 30;
    current4->link = NULL;

    
    struct node* temp = head;
    int count=0;
    while(temp != NULL)
	{
		temp = temp->link;
		count++;
	}
	printf("\n Total no. of nodes is %d\n",count);
	       
	struct node* p;
	p = head;
	while(p != NULL)
	{
	printf("%d\n",p->data);
	p=p->link; 
	}
	return 0;
}

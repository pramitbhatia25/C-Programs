#include <stdio.h>


// in a linked list demand is not known before execution
// in an array demand is known before execution
// basically it is like a chain
/* starting point is called head

Head has address to 1st node, 1st has address to 2nd so on, last node has address null so ends.

objective
create a new node using malloc, update data to node
add first node to head
add subsequent nodes to the end of the list one at a time

*/


struct node
{
	int data;
	struct node *next; //defining a pointer variable of node structure
};

struct node *head = NULL; //create head node

//head node is a pointer pointing to other nodes
	
struct node *t;
//create a new node using malloc, update data to node

t = (struct node *)malloc(sizeof(struct node));

//t is an address variable which is type casted to a variable of struct type ie struct node *)

t -> data = 11; t -> next = NULL;

//add first node to head
//now we have added first node
//next add subsequent node
struct node *t,*p;

t = (struct node *) malloc(sizeof(struct node));
t -? data = 44; t -> next = NULL;
p = head;

while(p -> next != NULL)
	p = p->next;

p -> next = t;

//thus at end p is holding the second last node, while t is holding the last node

// now we can add another node

//final
//structure definaition
int a;
struct node *head = NULL, *t, *p;
t = (struct node*) malloc(sizeof(struct node));
scanf("%d", &t -> data);
t ->next = NULL;
head = t;
do{
	t = (struct node *) malloc(sizeof(struct node));
	scanf("%d", &t->data;);
	t ->next = NULL;
	p = head;
	while(p -> next)
		p = p -> next; //printf("%d",p -> data);
	p ->next = t;
	printf("Do you want to add another element? 1 for yes, 0 for no");
	scanf("%d",&a)
}while(a);

//display function that will display the contents of a linked list
//address of the first node of the linked list will be passed as a parameter to this function

void display(struct node *p) // address of structure of node type
{
	while(p)
	{
		printf("%d --->", p -> data);
		p = p ->next;
	}
	printf("NULL\n");
	return;
}

void main()
{
	display(head);
}
	
	


//identify largest data and return node which has largest data

struct node *largest_node(struct node *p) // it returns address of a node thus we write *largest_node
{
	struct node *t;
	//body of function find largest of n nos
	return t;
}
void main()
{
	struct ndoe *q;
	q = largest_node(head);
	prinf("%d", q->data);
	display(head);
}




//unions
//derived type as structure
/*
union unionname
{
	data member;
} one or more union varibales;

// in unions, only one of data member is appeared rest disappear, the one which appears is the one just referenced
// in struct all of the data members are always there

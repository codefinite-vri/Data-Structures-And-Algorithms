/* Find out whether a binary tree is a binary search tree or not*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<unistd.h>
#define SLEN 5

struct node
{
	struct node *lchild;
	int info;
	struct node *rchild;
};

void display(struct node *ptr,int level);
void inorder(struct node *ptr);
struct node *Node(int item);
int IsBST(struct node *ptr, int MIN, int MAX);

int main( )
{
	struct node *root1, *root2, *root3;
	char str[SLEN];

	srandom(getpid());

	/* BST */
	root1 = Node(32);
	root1->lchild = Node(23);
	root1->rchild = Node(36);
	root1->lchild->rchild = Node(25);
	root1->rchild->lchild = Node(33);

	/* not a BST */
	root2 = Node(42);
	root2->lchild = Node(60);
	root2->rchild = Node(19);
	root2->lchild->rchild = Node(36);
	root2->rchild->lchild = Node(41);

	/* random test data */
	root3 = Node(random() % INT_MAX);
	root3->lchild = Node(random() % INT_MAX);
	root3->rchild = Node(random() % INT_MAX);
	root3->lchild->rchild = Node(random() % INT_MAX);
	root3->rchild->lchild = Node(random() % INT_MAX);

	display(root1,1);
	printf("\n\n");
	inorder(root1);
	printf("\n\n");

	if( IsBST(root1,INT_MIN,INT_MAX) )
		str[0] = '\0';  
	else
		strncpy(str, "not ", SLEN);
	printf("Tree 1 is %sa BST\n", str);

	display(root2,1);
	printf("\n\n");
	inorder(root2);
	printf("\n\n");

	if( IsBST(root2,INT_MIN,INT_MAX) )  
		str[0] = '\0';  
	else
		strncpy(str, "not ", SLEN);
	printf("Tree 2 is %sa BST\n", str);

	display(root3,1);
	printf("\n\n");
	inorder(root3);
	printf("\n\n");

	if( IsBST(root3,INT_MIN,INT_MAX) )  
		str[0] = '\0';  
	else
		strncpy(str, "not ", SLEN);
	printf("Tree 3 is %sa BST\n", str);
}/*End of main( )*/

int IsBST(struct node *ptr, int MIN, int MAX)  
{ 
	if(ptr == NULL) 
		return 1; 
	if(ptr->info < MIN  ||  ptr->info > MAX)
		return 0;
	return ( IsBST(ptr->lchild,MIN,ptr->info) && IsBST(ptr->rchild,ptr->info,MAX)); 
}

struct node *Node(int item)
{  
	struct node* tmp = (struct node *)malloc(sizeof(struct node));  
	if (tmp == NULL) {
		perror("malloc");
		exit(1);
	}
	tmp->info = item;  
	tmp->lchild = tmp->rchild = NULL;  
	return tmp;  
}/*End of Node()*/

void inorder(struct node *ptr)
{
	if(ptr == NULL )/*Base Case*/
		return;
	inorder(ptr->lchild);
	printf("%d  ",ptr->info);
	inorder(ptr->rchild);
}/*End of inorder( )*/

void display(struct node *ptr,int level)
{
	int i;
	if ( ptr!=NULL )
	{
		display(ptr->rchild, level+1);
		printf("\n");
		for (i = 0; i < level; i++)
			printf("    ");
		printf("%d", ptr->info);
		display(ptr->lchild, level+1);
	}
}/*End of display()*/


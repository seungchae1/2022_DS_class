#include <stdio.h>

struct node
{
	struct node* llink;
	char data;
	struct node* rlink;
};

struct node *createNode(char data)
{
	struct node* p;
	p = (struct node*)malloc(sizeof(struct node));
	p->llink = p->rlink = NULL;
	p->data = data;
	p->rlink = NULL;
	return p;
};

void preOrder(struct node* p)
{
	if (p != NULL)
	{
		printf("%c", p->data); //D
		preOrder(p->llink);	//L
		preOrder(p->rlink);	//R
	}
}
void inOrder(struct node* p)
{
	if (p != NULL)
	{
		inOrder(p->llink);	//L
		printf("%c", p->data); //D
		inOrder(p->rlink);	//R
	}
}
void postOrder(struct node* p)
{
	if (p != NULL)
	{
		postOrder(p->llink);	//L
		postOrder(p->rlink);	//R
		printf("%c", p->data); //D
	}
}

void deleteAll(struct node* p)
{
	if (p != NULL)
	{
		deleteAll(p->llink);	//L
		deleteAll(p->rlink);	//R
		printf("%c", p->data);	//D
		free(p);
	}
}
int main()
{
	struct node* root = createNode('A');
	root->llink = createNode('B');
	root->rlink = createNode('C');
	root->llink->llink = createNode('D');
	root->llink->rlink = createNode('E');
	root->rlink->llink = createNode('F');
	root->rlink->rlink = createNode('G');
	root->llink->rlink->llink = createNode('H');

	printf("전위 운행 : ");
	preOrder(root); printf("\n");
	printf("중위 운행 : ");
	inOrder(root); printf("\n");
	printf("후위 운행 : ");
	postOrder(root); printf("\n");

	printf("사라지는 순서 : ");
	deleteAll(root); root = NULL;

	//전위운행 : ABDEHCFG
	//중위운행 : DBHEAFCG
	//후위운행 : DHEBFGCA
	//사라지는 순서 : DHEBFGCA (후위운행이랑 같다)

	return 0;
}
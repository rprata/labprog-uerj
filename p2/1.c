#include <stdio.h>
#include <stdlib.h>


typedef struct tnode
{
	int elem;
	struct tnode * esq;
	struct tnode * dir;
} t_node;

int bintreecompare(t_node * tree1, t_node * tree2)
{
	if (tree1 == NULL && tree2 != NULL)
		return 1;

	if (tree2 == NULL && tree1 != NULL)
		return 1;

	if (tree1 != NULL && tree2 != NULL)
	{
		if (tree1->elem == tree2->elem)
		{
			bintreecompare(tree1->esq, tree2->esq); //compara pela esquerda
			bintreecompare(tree1->dir, tree2->dir); //compara pela direita
		}
		else
		{
			return 1;
		}
	}

	return 0;
}

int main (void)
{

	printf ("%d\n", bintreecompare(tree1, tree2));

	return 0;
}
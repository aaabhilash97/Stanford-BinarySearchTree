#include "urlib.h"
void mirror(struct node *root)
{
	if(root!=NULL){
		struct node *cop=root->left;
		root->left=root->right;
		root->right=cop;
		mirror(root->left);
		mirror(root->right);
	}
}
void doubletree(struct node *root)
{
	if(root!=NULL){
		struct node *copy=malloc(sizeof(struct node));
		copy->data=root->data;
		copy->left=root->left;
		root->left=copy;
		doubletree(copy->left);
		doubletree(root->right);
	}
}


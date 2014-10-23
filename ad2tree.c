#include "urlib.h"
/*Addtree*/
struct node *addtree(struct node *root,int d)
{
        if(root==NULL){
                root=malloc(sizeof(struct node));
                root->data=d;
                root->left=root->right=NULL;
        }
        else if(d<root->data)
                root->left=addtree(root->left,d);
        else
                root->right=addtree(root->right,d);
        return root;
}
/*new node*/
struct node *newnode(int d)
{
	struct node *new=malloc(sizeof(struct node));
	new->data=d;
	new->left=NULL;
	new->right=NULL;
}
/*insert to tree*/
struct node *insert(struct node *root,int d)
{
	if(root==NULL) return newnode(d);
	else{
		if(d<=root->data) root->left=insert(root->left,d);
		else root->right=insert(root->right,d);
		return root;
	}
}
/*Build 123*/
struct node *build123(struct node *root)
{
	root=NULL;
	root=newnode(5);
	root->left=newnode(2);
	root->right=newnode(7);
//	root->right->right=newnode(1);
	root->left->right=newnode(6);
//	root->right->left=newnode(7);
	root->left->left=newnode(1);
	return root;
}

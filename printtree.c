#include "urlib.h"
void printtree(struct node *root) 
{   
        if(root!=NULL){
                printtree(root->left);
                printf("%d\n",root->data);
                printtree(root->right);
        }
}
void printpostorder(struct node *root)
{
	if(root!=NULL){
		printtree(root->left);
                printtree(root->right);
		printf("%d\n",root->data);
	}
}

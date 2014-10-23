#include "urlib.h"
int min(struct node *root,int d)
{
	if(root!=NULL){
		int con=(root->data<d)?1:0;
		if(con==1) con=min(root->left,d);
		if(con==1) con=min(root->right,d);
		return con;
	}
	return 1;
}
int max(struct node *root,int d)
{
        if(root!=NULL){
                int con=(root->data>=d)?1:0;
                if(con==1) con=max(root->left,d);
                if(con==1) con=max(root->right,d);
                return con;
        }
        return 1;
}
int isbst(struct node *root)
{
	if(root!=NULL){
		int con=1;
		if(root->left!=NULL) con=min(root->left,root->data);
		if(root->right!=NULL&&con==1) con=max(root->right,root->data);
		return con;
	}
}


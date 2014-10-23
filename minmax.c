#include "urlib.h"
int minvalue(struct node *root)
{
        if(root!=NULL){
                int min=root->data;
                if(root->left!=NULL)
                   if(root->data>root->left->data)
                        min=minvalue(root->left);
                return min;
        }
}   
/*MaxValue*/
int maxvalue(struct node *root)
{   
        if(root==NULL) return;
        else { 
                int max=root->data;
                if(root->left!=NULL)
                   if(root->data<root->left->data)
                        max=maxvalue(root->left);
                return max;
        }
}

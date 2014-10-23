#include "urlib.h"
/*SIZE OF TREE*/
int size(struct node *root)
{
        if(root==NULL) return 0;
        else return size(root->left)+size(root->right)+1;
}
/*maxDepth*/
int maxdepth(struct node *root)
{
        if(root==NULL) return 0;
        else{
                int ld=maxdepth(root->left);
                int rd=maxdepth(root->right);
                if(ld>rd) return (ld+1);
                else return rd+1;
        }      
}


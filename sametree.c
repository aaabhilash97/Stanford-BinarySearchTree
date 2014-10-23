#include "urlib.h"
int sametree(struct node *root1,struct node *root2)
{
        if(root1!=NULL&&root2!=NULL){
                if(root1->data==root2->data){
                        int cond=1;
                        cond=sametree(root1->left,root2->left);
			cond=sametree(root1->right,root2->right);
                        return cond;
                }
                else return 0;
        }
        else if(root1==NULL&&root2==NULL) return 1;
        else return 0;
}

#include"urlib.h"
int haspathsum(struct node *root,int sum)
{
	if(root==NULL) return;
	if(root->right!=NULL||root->left!=NULL) 
		return haspathsum(root->left,root->data+sum)+haspathsum(root->right,root->data+sum);
	else {
		printf("\npath=%d",sum+root->data);
		return sum+root->data;
	}
}
int printpath1(struct node *root,int s[],int len,int path)
{
	if(root!=NULL){
		if(root->right!=NULL||root->left!=NULL){
			s[len]=root->data;
//			printf("%d",s[len]);
			len=len+1;
			if(root->left!=NULL) path=printpath1(root->left,s,len,path);
			if(root->right!=NULL) path=printpath1(root->right,s,len,path);
		}
		else {
//			printf("%d",root->data);
			s[len]=root->data;
			int i=0;
			printf("\npath%d:",path);
			while(i<=len){
				printf("-%d",s[i]);
				i++;
			}
				return path+1;
				printf("\n");
		}
	}
}
void printpath(struct node *root)
{
	int st[12];
        printpath1(root,st,0,1);
}


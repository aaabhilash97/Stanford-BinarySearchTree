#include "urlib.h"
int lookup(struct node* root, int target) {
	if (root == NULL) {
	return(0);
	}
	else {
		if(target == root->data) return(1);
		else {
			if (target < root->data) return(lookup(root->left, target));
			else return(lookup(root->right, target));
		}
	}
}

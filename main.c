#include "urlib.h"
main()
{
	struct node *root=NULL;
	int c;
	char s[5];
//	for(scanf("%s",s);strcmp(s,"x");scanf("%s",s)){
//		c=atoi(s);
//		root=addtree(root,c);
//	}
	root=build123(root);
	printpath(root);
	printf("\nisbdt=%d",isbst(root));

}

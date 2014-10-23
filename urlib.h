#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
	};
struct node *addtree(struct node *,int );
void printtree(struct node *);
int lookup(struct node *,int );
struct node *insert(struct node *,int);
struct node *newnode(int);
struct node *build123(struct node *);
int size(struct node*);
void printpostorder(struct node *);
int minvalue(struct node *);
int maxvalue(struct node *);
int maxdepth(struct node *);
int size(struct node *);
int haspathsum(struct node *root,int sum);
int printpath1(struct node *root,int s[],int len,int path);
void printpath(struct node *root);
int sametree(struct node *,struct node *);
void mirror(struct node *);
void doubletree(struct node *);
int counttrees(int);
int min(struct node *,int);
int max(struct node *,int);
int isbst(struct node *);

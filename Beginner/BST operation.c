#include<stdio.h>
#include<malloc.h>

struct node
{
	int info,p;
	struct node *l,*r;
};

struct node *get(int n,int i)
{
	struct node* t=(struct node *)malloc(sizeof(struct node));
	t->l=NULL;
	t->r=NULL;
	t->info=n;
	t->p=i;
	return t;
}
struct node* ins(struct node *t,int n,int i)
{
	if(!t)
	{
		printf("%d\n",i);
		return get(n,i);
	}
	if(n<t->info)
		t->l=ins(t->l,n,2*i);
	else
		t->r=ins(t->r,n,2*i+1);
	return t;
}
struct node *del(int n,struct node *t)
{
	if(t)
	{
		if(t->info>n)
			t->l=del(n,t->l);
		else if(t->info<n)
			t->r=del(n,t->r);
		else
		{
			printf("%d\n",t->p);
			if(!(t->l)) 
			{
				struct node *x=t->r;
				free(t);
				return x;
			}
			else if(!(t->r)) 
			{
				struct node *x=t->l;
				free(t);
				return x;
			}
			else
			{
				struct node *x=t->r;
				while(x->l) x=x->l;
				t->info=x->info;
				t->r=del(t->info,t->r);
			}
		}
	}
	return t;
}
int main()
{
	int q,n;
	struct node *h=NULL;
	char c;
	scanf("%d ",&q);
	while(q--)
	{
		scanf("%c %d ",&c,&n);
		if(c=='i') h=ins(h,n,1);
		else h=del(n,h);
	}
	return 0;
}


https://www.codechef.com/problems/BSTOPS
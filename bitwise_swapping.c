#include<stdio.h>
void main()
{
	int num,poss1,poss2,c,d;
	printf("enter your input");
	scanf("%d",&num);
	printf("Which bits are need to swap");
	scanf("%d%d",&poss1,&poss2);
	c=num ^ 1<<poss1;
	d=c ^ 1<<poss2;
	
	printf("%d", d);
	
}
	
	
	

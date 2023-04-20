#include<stdio.h>
void main()
{
	int num,position;
	printf("enter your input");
	scanf("%d",&num);
	printf("Which bit is need to set/unset");
	scanf("%d",&position);
	num^=(1<<position);
	printf("%d",num);
}

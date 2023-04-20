#include<stdio.h>
void main()
{
	int a=15,count=0;
	while(a>0)
	{
		count++;
		a=a&(a-1);
	}
	printf("%d",count);
}

#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],i,j;
	printf("Enter your inputs for a");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter your inputs for b");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The output os the array is:\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}

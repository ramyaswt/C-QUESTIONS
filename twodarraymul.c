#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],mul[2][2],k,i,j;
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
			mul[i][j]=0;
			for(k=0;k<2;k++)
			{
			
				mul[i][j]+=a[i][k]+b[j][k];
			}
		}
	
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	
}

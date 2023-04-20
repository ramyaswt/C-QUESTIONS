#include<stdio.h>
void main()
{
	int a[50],i,j,n=0;
	printf("How many element you want");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("\n%d",a[j]);	
			}
		}	
	}
}

#include<stdio.h>
void main()
{
	int num[6],j,i,temp;
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(num[i]<num[j])
			{
				temp=num[j];
				num[j]=num[i];
				num[i]=temp;
			}
		}
		printf("%d\n",num[i]);
	}
}
	
	
	

#include<stdio.h>
void main()
{
	int val,i,j=1,rem,sum=0,temp;
	printf("Enter the number");
	scanf("%d",&val);
	temp=val;
	while(val>0)
	{
		rem=val%10;
		sum+=(rem*rem*rem);	
		val/=10;
	}
	if(temp==sum)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("Not armstrong number");
	}
}

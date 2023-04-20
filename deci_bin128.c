#include<stdio.h>
void main()
{
	int deci_val,i,j=1,rem,sum=0;
	printf("Enter the number");
	scanf("%d",&deci_val);
	while(deci_val>0)
	{
		rem=deci_val%2;
		sum=(sum*10)+rem;	
		deci_val/=2;
	}
	printf("%d",sum);
	

}

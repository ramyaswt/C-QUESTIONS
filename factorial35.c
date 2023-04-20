#include<stdio.h>
int num,fact=1,ans;
int factorial(int num)
{
	if(num>=1)
	{
		fact*=num;
		num--;
		factorial(num);
	}
	
}
void main()
{
	scanf("%d",&num);
	ans=factorial(num);
	printf("%d",ans);
	
}
	

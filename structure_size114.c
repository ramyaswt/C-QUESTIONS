#include<stdio.h>
#pragma pack(1)
struct 
{
	int a[4];
	char b;
	float c;
}s1,s2;
void main()
{
	//printf("%d\n",sizeof(s1.b));
	printf("%d",sizeof(s1));
}

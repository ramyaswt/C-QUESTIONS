#include<stdio.h>
#pragma pack(1)
struct
{
	int a;

	char b;
		float c;
	
}s1;
void main()
{
	s1.a=78;
	s1.b='p';
	//s1.c=89.3;
	printf("%d\n%d\n%d\n\n",&s1.a,&s1.b,&s1.c);
	printf("%d\n%c\n",s1.a,s1.b);
	printf("%d",sizeof(s1));
}
		

#include<stdio.h>
void main()
{
	char str[]="hi";
	char *p="hello";
	printf("\n%d\n%d\n%d\n\n",&str[0],&str[1],&p);
	printf("%s\n%s",str,p);
}
	

#include<stdio.h>
int main()
{
	char j[5];
	printf("Enter string:\n");
	scanf("%[^\n]s",j);
	printf("Length of string by function:%d\n",strlen(j));
	return 0;
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0,n;
	printf("enter a no:\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d:\n",i);
		 sum=sum+i;
		 i++;
	}
	printf("sum=%d:\n",sum);
	getch();
}

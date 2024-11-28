#include<stdio.h>
int main()
{
	int i;
	int a[5]={10,20,30,40,50};
	int size= sizeof(a)/sizeof a[0];  //12/4=3
	int *p=a; 
	for(i=0;i<size;i++)
	{
		printf("%d\n",*p);
	    p++;
	}
 return 0;
}

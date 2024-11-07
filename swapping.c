#include<stdio.h>
void swap(int a,int b);
void main()
{
	 int a,b;
	 printf("enter any two number:\n");
	 scanf("%d%d",&a,&b);
	 printf("before swapping a=%d and b=%d\n",a,b);
	 swap(a,b);
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swap=%d%d\n",a,b);
}

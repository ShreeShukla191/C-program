#include<stdio.h>
#include<conio.h>
void main()
(
  double p=1000;
  double rate=10;
  double time=2;
  double amount=p*((pow((1+rate/100),time)));
  double CI=amount-p;
  printf("Compound interest is %f",CI);
  getch();
  clrscr();
}
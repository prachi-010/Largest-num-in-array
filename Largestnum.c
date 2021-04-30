#include<stdio.h>
#include<conio.h>

void main()
{
int A[10];
int i,largest;
clrscr();

for(i=0;i<=10;i++)
{
printf("Enter element A[%d] of an array\n",i);
scanf("%d",&A[i]);
}

largest=A[0];

for(i=1;i<=10;i++)
{
if(largest<A[i])
{
largest=A[i];
}
}
printf("\n\nThe largest number is array is %d\n",largest);
getch();
}

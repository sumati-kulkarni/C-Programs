/*  To Check For The Even Or Odd Number    */

#include<stdio.h>
#include<conio.h>

void main()
  {
    int n;
    clrscr();
    printf("\tTo Check For Even Or Odd Number\n\n\n");
    printf("Enter A Number : ");
    scanf("%d",&n);
    if((n%2)==0)
      {
	printf("\n\n%d Is Even Number\n",n);
      }
    else
      {
	printf("\n\n%d Is Odd Number\n",n);
      }
    getch();
  }
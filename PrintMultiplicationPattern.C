/*  To Print The Following Pattern Of Multiplication Of Two Digit Numbers
		   4 5
		 X 7 5
	       -------
		 3 1 5
	       1 3 5 +
	       -------
	       1 6 6 5
	       -------
*/

#include<stdio.h>
#include<conio.h>

void main()
  {
    int n1,n2,mul;
    clrscr();
    printf("\nEnter Any 2 Two-Digit Numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("\n\n");
    printf("\t     %d\n",n1);
    printf("\t   X %d\n",n2);
    printf("\t---------\n");
    printf("\t    %d\n",(n2/10)*n1);
    printf("\t   %d+\n",(n2%10)*n1);
    printf("\t---------\n");
    printf("\t   %d\n",n1*n2);
    printf("\t---------\n");
    getch();
  }
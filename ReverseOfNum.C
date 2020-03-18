/*    To Find Reverse Of A Number     */

#include<stdio.h>
#include<conio.h>

void main()
  {
    int n,rev=0;
    clrscr();
    printf("\tReverse Of A Number\n\n\n");
    printf("Enter Any Number : ");
    scanf("%d",&n);
    printf("\n\nReverse Of %d =",n);
    while(n!=0)
      {
	rev=rev*10+(n%10);
	n=n/10;
      }
    printf(" %d\n",rev);
    getch();
  }
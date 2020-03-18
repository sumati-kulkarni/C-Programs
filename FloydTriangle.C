/*      Floyd's Triangle   */

#include<stdio.h>
#include<conio.h>

void main()
  {
    int c=1,i,j;
    clrscr();
    printf("\tFloyd's Triangle\n\n\n");
    for(i=1;i<11;i++)
      {
	for(j=1;j<=i;j++)
	  {
	    printf("%d\t",c++);
	  }
	printf("\n\n");
      }
    getch();
  }
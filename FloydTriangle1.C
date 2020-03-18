/*      Floyd's Triangle   */

#include<stdio.h>
#include<conio.h>

void main()
  {
    int c=0,i,j,d;
    clrscr();
    printf("\tFloyd's Triangle\n\n\n");
    for(i=1;i<11;i++)
      {
	if(c==0)
	 {
	  c=c+1;
	  printf("%d  ",c);
	  d=c;
	 }
	else
	 {
	  c=c-1;
	  printf("%d  ",c);
	  d=c;
	 }
	for(j=2;j<=i;j++)
	  {
	    if(c==0)
	      {
		c=c+1;
		printf("%d  ",c);
	      }
	    else
	      {
		c=c-1;
		printf("%d  ",c);
	      }
	  }
	c=d;
	printf("\n\n");
      }
    getch();
  }
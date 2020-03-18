/* To Print The Multiplication Table   */

#include<stdio.h>
#include<conio.h>

void main()
  {
    int m,n,i,j;
    clrscr();
    printf("\tMultiplication Table\n\n\n");
    printf("Enter The Number Of Rows Of Multiplication Table : ");
    scanf("%d",&m);
    printf("\n\nEnter The Number Of Columns Wanted For Multiplication Table : ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=m;i++)
      {
	for(j=1;j<=n;j++)
	  {
	    printf("%4d",i*j);
	  }
	printf("\n\n");
      }
    getch();
  }
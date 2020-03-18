/*  Sum Of Harmonic Series Of n Terms  */

#include<stdio.h>
#include<conio.h>

void main()
  {
    int n,i;
    float sum=0.0;
    clrscr();
    printf("\t Sum Of Harmonic Series If n Terms\n\n");
    printf("Enter The Value Of n : ");
    scanf("%d",&n);
    printf("\nHarmonic Series Are : \n\n");
    for(i=1;i<=n;i++)
      {
	printf("1/%d    ",i);
	sum=sum+(float)(1/i);
      }
    printf("\n\nSum Of %d Harmonic Series = %f\n",n,sum);
    getch();
  }
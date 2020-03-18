/*   To Find n'th and -n'th Power Of 2    */

#include<stdio.h>
#include<conio.h>

void main()
  {
    int n,i;
    long int p;
    double q;
    clrscr();
    printf("\tTo Find n'th and -n'th Power Of 2\n\n\n");
    printf("Enter The Value Of n : ");
    scanf("%d",&n);
    printf("\n\n----------------------------------\n");
    printf("    2pow(n)       n     2pow(-n)\n");
    printf("----------------------------------\n");
    for(i=0;i<=n;i++)
      {
	if(i==0)
	  p=1;
	else
	  p=p*2;
	q=1/(double)p;
	printf("\n%10ld%9d\t%lf",p,i,q);
      }
    getch();
  }
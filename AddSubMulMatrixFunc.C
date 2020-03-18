#include<stdio.h>
#include<conio.h>
#include<math.h>
void add(int,int,int [10][10],int [10][10]);
void sub(int,int,int [10][10],int [10][10]);
void mul(int,int,int,int [10][10],int [10][10]);
void main()
  {
    int a[10][10],b[10][10];
    int i,j,r1,c1,r2,c2,ch;
    clrscr();
    printf("enter the order of 1st matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the elements of 1st matrix\n");
    for(i=0;i<r1;i++)
      {
	for(j=0;j<c1;j++)
	  {
	    scanf("%d",&a[i][j]);
	  }
      }
    printf("enter the order of second matrix\n");
    scanf("%d%d",&r2,&c2);
    printf("enter the elements of second matrix\n");
    for(i=0;i<r2;i++)
      {
	for(j=0;j<c2;j++)
	  {
	    scanf("%d",&b[i][j]);
	  }
      }
    for(;;)
      {
	printf("\tMENU\n1 addition\n2 substraction\n3 multiplication\n4 exit\nenter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	  {
	    case 1 : if((r1==r2)&&(c1==c2))
		       {
			 add(r1,c1,a,b);
		       }
		     else
		       {
			 printf("addition is not possible\n\n");
		       }
		     break;
	    case 2 : if((r1==r2)&&(c1==c2))
		       {
			 sub(r1,c1,a,b);
		       }
		     else
		       {
			 printf("substraction is not possible\n\n");
		       }
		     break;
	    case 3 : if(c1==r2)
		       {
			 mul(r1,r2,c2,a,b);
		       }
		     else
		       {
			 printf("multiplication is not possible\n\n");
		       }
		     break;
	    case 4 : exit(0);
	    default : printf("invalid choice\n\n");
		      break;
	  }
      }
  }
void add(int r1,int c1,int a[10][10],int b[10][10])
  {
    int sum[10][10],i,j;
    for(i=0;i<r1;i++)
      {
	for(j=0;j<c1;j++)
	  {
	    sum[i][j]=a[i][j]+b[i][j];
	  }
      }
    printf("\naddition of two matrices is:\n");
    for(i=0;i<r1;i++)
      {
	for(j=0;j<c1;j++)
	  {
	    printf("%d\t",sum[i][j]);
	  }
	printf("\n");
      }
  }
void sub(int r1,int c1,int a[10][10],int b[10][10])
  {
    int diff[10][10],i,j;
    for(i=0;i<r1;i++)
      {
	for(j=0;j<c1;j++)
	  {
	    diff[i][j]=a[i][j]-b[i][j];
	  }
      }
    printf("\nsubstraction of two matrices is:\n");
    for(i=0;i<r1;i++)
      {
	for(j=0;j<c1;j++)
	  {
	    printf("%d\t",diff[i][j]);
	  }
	printf("\n");
      }
  }
void mul(int r1,int r2,int c2,int a[10][10],int b[10][10])
  {
    int prod[10][10],k,i,j;
    for(i=0;i<r1;i++)
      {
	for(j=0;j<c2;j++)
	  {
	    prod[i][j]=0;
	    for(k=0;k<r2;k++)
	      {
		prod[i][j]=prod[i][j]+(a[i][k]*b[k][j]);
	      }
	  }
      }
    printf("\nmultiplication of matrices is:\n");
    for(i=0;i<r1;i++)
      {
	for(j=0;j<c2;j++)
	  {
	    printf("%d\t",prod[i][j]);
	  }
	printf("\n");
      }
  }
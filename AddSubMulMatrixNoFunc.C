/*  Addition, Substraction & Multiplication Of Matrices Without
					 Using Functions  */


#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
  {
    int a[10][10],b[10][10],s[10][10],d[10][10],m[10][10];
    int i,j,k,m1,n1,m2,n2;
    clrscr();
    printf("\tAddition And Substraction\n\n\n");
    printf("Enter the order of 1st matrix\n");
    printf("Enter The Row Size : ");
    scanf("%d",&m1);
    printf("Enter The Column Size : ");
    scanf("%d",&n1);
    printf("Enter the order of 2nd matrix \n");
    printf("Enter The Row Size : ");
    scanf("%d",&m2);
    printf("Enter The Column Size : ");
    scanf("%d",&n2);
    if((m1==m2)&&(n1==n2))
      {
	printf("enter the elements of 1st matrix Of Order %d X %d\n",m1,n1);
	for(i=0;i<m1;i++)
	  {
	    for(j=0;j<n1;j++)
	      {
		scanf("%d",&a[i][j]);
	      }
	  }
	printf("enter the elements of second matrix Of Order %d X %d\n",m2,n2);
	for(i=0;i<m2;i++)
	  {
	    for(j=0;j<n2;j++)
	      {
		scanf("%d",&b[i][j]);
	      }
	  }
	for(i=0;i<m1;i++)
	  {
	    for(j=0;j<n1;j++)
	      {
		s[i][j]=a[i][j]+b[i][j];
		d[i][j]=a[i][j]-b[i][j];
	      }
	  }
	printf("addition of two matrices is:\n");
	for(i=0;i<m1;i++)
	  {
	    for(j=0;j<n1;j++)
	      {
		printf("%d\t",s[i][j]);
	      }
	    printf("\n");
	  }
	printf("substraction of two matrices is:\n");
	for(i=0;i<m2;i++)
	  {
	    for(j=0;j<n2;j++)
	      {
		printf("%d\t",d[i][j]);
	      }
	    printf("\n");
	  }
      }
    else
      {
	printf("addition is not possible\n");
	printf("substraction is not possible\n");
      }
    printf("\n\tMultiplication\n\n\n");
    printf("Enter the order of 1st matrix\n");
    printf("Enter The Row Size : ");
    scanf("%d",&m1);
    printf("Enter The Column Size : ");
    scanf("%d",&n1);
    printf("Enter the order of 2nd matrix \n");
    printf("Enter The Row Size : ");
    scanf("%d",&m2);
    printf("Enter The Column Size : ");
    scanf("%d",&n2);
    if(n1==m2)
      {
	printf("\nEnter The Elements Of 1st Matrix Of Order %d X %d\n",m1,n1);
	for(i=0;i<m1;i++)
	  {
	    for(j=0;j<n1;j++)
	      {
		scanf("%d",&a[i][j]);
	      }
	  }
	printf("\nEnter The Elements Of 2nd Matrix Of Order %d X %d\n",m2,n2);
	for(i=0;i<m2;i++)
	  {
	    for(j=0;j<n2;j++)
	      {
		scanf("%d",&b[i][j]);
	      }
	  }
	printf("\nMltiplication Of Matrices is :\n");
	for(i=0;i<m1;i++)
	  {
	    for(j=0;j<n2;j++)
	      {
		m[i][j]=0;
		for(k=0;k<m2;k++)
		  {
		    m[i][j]=m[i][j]+(a[i][k]*b[k][j]);
		  }
		printf("%d\t",m[i][j]);
	      }
	    printf("\n");
	 }
      }
    getch();
  }
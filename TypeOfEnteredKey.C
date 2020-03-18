/*   To Check The Type Of Key Entered   */

#include<stdio.h>
#include<conio.h>

void main()
  {
    char c,ch='y';
    clrscr();
    printf("\tTo Check The Type Of Key Entered\n");
    do
      {
	printf("\n\nPress Any Key : ");
	c=getche();
	if(isalpha(c)>0)
	  {
	    if(isupper(c)>0)
	      {
		printf("\n%c is Uppercase Character\n",c);
	      }
	    else if(islower(c)>0)
	      {
		printf("\n%c is Lowercase Character\n",c);
	      }
	  }
	else if(isdigit(c)>0)
	  {
	    printf("\n%c is a Digit\n",c);
	  }
	else if(ispunct(c)>0)
	  {
	    printf("\n%c is a Punctuation Mark\n",c);
	  }
	else if(isspace(c)>0)
	  {
	    printf("\n%c is a Space\n",c);
	  }
	else
	  {
	    printf("\n%c is a Special Character\n",c);
	  }
	printf("\nDo You Want To Continue (y/Y) / (n/N)? : ");
	ch=getche();
      }while(ch=='y' || ch=='Y');
    getch();
  }
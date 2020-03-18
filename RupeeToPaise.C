/*   Conversion Of Rupee To Paise   */

#include<stdio.h>
#include<conio.h>

void main()
  {
    float Rs=0.0;
    long int paise=0;
    clrscr();
    printf("\tConversion Of Rupees To Paise\n\n");
    printf("Enter Rupees : ");
    scanf("%f",&Rs);
    paise=(long int)(Rs*100);
    printf("\n%f Rupees = %ld paise\n",Rs,paise);
    getch();
  }
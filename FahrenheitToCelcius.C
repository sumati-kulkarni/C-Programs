/*   Conversion From Fahrenheit To Celcius  */


#include<stdio.h>
#include<conio.h>

void main()
  {
    float fahrenheit,celcius;
    clrscr();
    printf("\tConversion Of Temperature From Fahrenheit To Celcius\n\n\n");
    printf("Enter The Fahrenheit Value\n");
    scanf("%f",&fahrenheit);
    celcius=(fahrenheit-32.0)/1.8;
    printf("\n\nFahrenheit temperature = %f",fahrenheit);
    printf("\n\nCelcius Temperature = %f",celcius);
    getch();
  }

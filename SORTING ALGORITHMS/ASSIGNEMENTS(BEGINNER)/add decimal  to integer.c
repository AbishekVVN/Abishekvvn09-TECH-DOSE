#include<stdio.h>

#include<conio.h>

#include<math.h>

main()

{

int number, digit,i=0,dec=0;

printf(“\nEnter the number:”);

scanf(“%d”, &number);

while(number > 0)

{

digit = number %8;

number = number/8;

dec = dec + (digit * pow(10,i));

i++;

}

printf(“equivalent  decimal number is %d”,dec);

}

#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    long int year, a ;

    printf("Enter a year: ");
    scanf("%ld",&year);
    a=year%4        ;
    if (a==0)
     printf("The year is a leap year!");

    else
       printf("The year is not a leap year!");

    getch();
    return 0;
}
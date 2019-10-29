#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    long int year, a ;

    printf("Enter a Year :");
    scanf("ld%",&year);
    a=year%7        ;

	  if (a=7)
     printf("1st January is monday!");
     else if (a=6)
     printf("1st January is tuesday!");
     else if (a=5)
     printf("1st January is wednesday!");
     else if (a=0)
     printf("1st January is thursday!");
     else if (a=3)
     printf("1st January is friday!");
     else if (a=1)
     printf("1st January is saturday!");
     else if (a=4)
     printf("1st January is sunday!");



    getch();
    return 0;
}
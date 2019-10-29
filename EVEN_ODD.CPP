#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    long int num ;
		int a;
    printf("Enter a No:");
    scanf("%ld",&num);
    a=num%2        ;
    if (a==0)

       printf("The no. is even, %d",a);

    else
       printf("The no. is odd,%d",a);

    getch();
    return 0;
}
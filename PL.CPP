#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    float sp,cp,a,b  ;

    printf("Enter Cost price of the product:");
    scanf("%f",&cp);
    printf("Enther Selling price of the product:");
    scanf("%f",&sp);

    a=cp-sp;
    b=sp-cp;


    if(sp<cp)
	printf("You have a LOSS of Rs.%f",a);

    if(sp>cp)
	   printf("You have a PROFIT of Rs.%f",b) ;

    if(sp==cp)
	   printf("You do not have either PROFIT or LOSS");


    getch();
    return 0;
}
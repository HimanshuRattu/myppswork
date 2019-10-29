#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    float a,c,d;
    printf("Enter a no. in location C:");
    scanf("%f",&c);
    printf("Enter a no. in location D:");
    scanf("%f",&d);

    a=c ;
    c=d ;
    d=a ;

    printf("After Interchanging the no. in location");
    printf("\n---------------------------------------");
    printf("\nNo.in location C is:%f",c);
    printf("\nNo.in location D is:%f",d);

    getch();
    return 0;
}
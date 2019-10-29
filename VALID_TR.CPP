#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    char another;
    int a, a1,a2 ,a3;
    do
    {
    printf("Enter First Angle:");
    scanf("%d",&a1);
    printf("Enter Second Angle:");
    scanf("%d",&a2);
    printf("Enter Third Angle:");
    scanf("%d",&a3);

    a=a1+a2+a3;
    if (a==180)
     printf("The triangle is valid");
    else
     printf("The triangle is not valid");

     printf("\nWant to try once again y/n");
    fflush(stdin);
    scanf("%c",&another);
   }while (another=='y');





    getch();
    return 0;
}
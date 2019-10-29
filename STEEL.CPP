#include<stdio.h>
#include<conio.h>
int main()
{   clrscr();
    float cc,hd,ts;

    printf("Enter the Hardness of steel:");
    scanf("%f",&hd);
    printf("Enter the Carbon content of steel:");
    scanf("%f",&cc);
    printf("Enter the Tensile strength of steel:");
    scanf("%f",&ts);


    if(hd>50&&cc<0.7&&ts>5600)
    printf("Grade of Steel is 10:");

    else if(hd>50&&cc<0.7)
    printf("Grade of Steel is 9:");

    else if(ts>5600&&cc<0.7)
    printf("Grade of Steel is 8:");

    else if(hd>50&&ts>5600)
    printf("Grade of Steel is 7:");

    else if(hd>50||cc<0.7||ts>5600)
    printf("Grade of Steel is 6:");

    else
    printf("Grade of Steel is 5:");

    getch();
    return 0;
}
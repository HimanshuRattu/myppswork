#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{   clrscr();
    int theta=233  ,po=253,x    ;
    double th,angle,vsin,vcos;

    printf("Enter the value of angle(%c) in Degree:",theta);
    scanf("%lf",&angle);
    vsin=sin(th);
    vcos=cos(th);
    x=pow(vsin,2)+pow(vcos,2);
    printf("sin%c+cos%c=%d",po,po,x);
    getch();
    return 0;
}
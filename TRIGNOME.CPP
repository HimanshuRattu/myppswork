#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{   clrscr();

    int theta=233      ;
    double th, angle ,ValueOf_tan,vsin,vcos,vsec,vcosec,vcot   ;


    printf("Enter the value of angle(%c) in Degree:",theta);
    scanf("%lf",&angle);

    th=angle*(3.14159/180);
    ValueOf_tan=tan(th)     ;
    vsin=sin(th)     ;
    vcos=cos(th)     ;
    vcot=1/tan(th)     ;
    vcosec=1/sin(th)   ;
    vsec=1/cos(th);

    printf("sin(%c)=%lf\ncos(%c)=%lf\ntan(%c)=%lf\ncot(%c)=%lf\nsec(%c)=%lf\ncosec(%c)=%lf",theta,vsin,theta,vcos,theta,ValueOf_tan,theta,vcot,theta,vsec,theta,vcosec) ;

    getch();
    return 0;
}
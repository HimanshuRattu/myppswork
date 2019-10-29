#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{   clrscr()      ;
    float t,v,wcf ;
    printf("Enter the air Temprature(t) in F:")  ;
    scanf("%f",&t);
    printf("Enter the Velocity of wind(v) in mile per hour:");
    scanf("%f",&v);

    wcf=(35.74+(0.6215*t)+(((0.4275*t)-35.75)*pow(v,0.16))) ;
    printf("The Wind chilling factor is(wcf):%f",wcf)    ;

    getch();
    return 0;
}
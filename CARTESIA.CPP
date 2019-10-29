#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{   clrscr();
    int x,y,phi=232;
    float r ,ph ;

    printf("Enter the Coordinates(x): " )  ;
    scanf("%d",&x);
    printf("Enter the Coordinates(y): " )  ;
    scanf("%d",&y);

    r=sqrt((x*x)+(y*y)) ;
    ph=atan(y/x) ;

    printf("Answer is:" );
    printf("(%f,%c=%f)",r,phi,ph)   ;
    getch();
    return 0;

}
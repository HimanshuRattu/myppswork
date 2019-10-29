#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{   clrscr();
    int x1,y1,x2,y2,x3,y3 ;
    float a,b,c;

    printf("Enter the Coordinates(x1): " )  ;
    scanf("%d",&x1);
    printf("Enter the Coordinates(y1): " )  ;
    scanf("%d",&y1);
    printf("Enter the Coordinates(x2): " )  ;
    scanf("%d",&x2);
    printf("Enter the Coordinates(y2): " )  ;
    scanf("%d",&y2);
    printf("Enter the Coordinates(x3): " )  ;
    scanf("%d",&x3);
    printf("Enter the Coordinates(y3): " )  ;
    scanf("%d",&y3);

    a=sqrt((pow(x2-x1,2))+((y2-y1)*(y2-y1)));
    b=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
    c=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));

    if (c==b+a||b==c+a||a==c+b)
     printf("\nPoints are collinear");
    else
     printf("\nPoints are not collinear");
    getch();
    return 0;

}
#include<stdio.h>
#include<conio.h>
int main()
{   clrscr();
    int x,y;


    printf("Enter the Coordinates(x): " )  ;
    scanf("%d",&x);
    printf("Enter the Coordinates(y): " )  ;
    scanf("%d",&y);

    if(x==0&&y==0)
	printf("Point lies on origin");
    else if(x==0)
	printf("Point lies on y-axis");
    else if(y==0)
	printf("Point lies on x-axis");
    else if(x>0&&y>0)
	printf("Point lies in 1st quadrent");
    else if(x<0&&y>0)
	printf("Point lies in 2nd quadrent");
    else if(x<0&&y<0)
	printf("Point lies in 3rd quadrent");
    else if(x>0&&y<0)
	printf("Point lies in 4th quadrent");

    getch();
    return 0;
}
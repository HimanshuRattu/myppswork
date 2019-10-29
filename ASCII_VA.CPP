#include<stdio.h>
#include<conio.h>
int main()
{   clrscr();
    char c  ;

    printf("Enter A Character:");
    scanf("%c",&c);


    //printf("ASCII character is%c=%d", c,c);

    if (c>=65&&c<=90)
	printf("\nEntered Character is a Captial Letter");
    else if(c>=97&&c<=122)
	printf("\nEntered Character is a Small Letter");
    else if(c>=48&&c<=57)
	printf("\nEntered Character is a Number");
    else if(c>=0&&c<=47||c>=58&&c<=64||c>=91&&c<=96||c>=123&&c<=126)
	printf("\nEntered Character is a Special Symbol");



    getch();
    return 0;
}
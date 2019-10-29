#include<stdio.h>
#include<conio.h>
int main()
{   clrscr();
    char c  ;

    printf("Enter A Character:");
    scanf("%c",&c);

    //printf("ASCII character is%c=%d", c,c);

    if(c>=0&&c<=47||c>=58&&c<=64||c>=91&&c<=96||c>=123&&c<=127
    ?printf("\nEntered Character is a Special Symbol")
    :printf("\nEntered Character is not a Special Symbol")

    )

    getch();
    return 0;
}
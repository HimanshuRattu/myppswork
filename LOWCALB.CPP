#include<stdio.h>
#include<conio.h>
int main()
{   clrscr();
    char c  ;

    printf("Enter A Character:");
    scanf("%c",&c);


    //printf("ASCII character is%c=%d", c,c);

    if (c>=97&&c<=122
    ?printf("\nEntered Character is a Lower Case Alphabet")
    :printf("\nEntered Character is not a Lower Case Alphabet")

    )

    getch();
    return 0;
}
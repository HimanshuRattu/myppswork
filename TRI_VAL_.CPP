#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    char another;
    int s, s1,s2 ,s3;
    do
    {
    printf("Enter First Side:");
    scanf("%d",&s1);
    printf("Enter Second Side:");
    scanf("%d",&s2);
    printf("Enter Third Side:");
    scanf("%d",&s3);

    if(s3>s1&&s3>s2&&s3<=s1+s2||
       s1>s3&&s1>s2&&s1<=s2+s3||
       s2>s1&&s2>s3&&s2<=s3+s1)
    printf("The triangle is valid!");
    else
    printf("The triangle is not valid!");


    printf("\nWant to try once again y/n");
    fflush(stdin);
    scanf("%c",&another);
   }while (another=='y');





    getch();
    return 0;
}
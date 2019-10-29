#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    clrscr();
    char another;
    int s, s1,s2 ,s3,a,b,c;
    do
    {
    printf("Enter First Side:");
    scanf("%d",&s1);
    printf("Enter Second Side:");
    scanf("%d",&s2);
    printf("Enter Third Side:");
    scanf("%d",&s3);
    a= pow(s1,2)       ;
    b= pow(s2,2)       ;
    c= pow(s3,2)       ;

     if(s3>s1&&s3>s2&&s3<=s1+s2||
	s1>s3&&s1>s2&&s1<=s2+s3||
	s2>s1&&s2>s3&&s2<=s3+s1)
       {
	  if(s1==s2==s3)
	  printf("The triangle is Equilateral");
	  else if (s1==s2||s2==s3||s3==s1)
	  printf("The triangle is Isoseles");
	  else if(a==b+c||b==c+a||c==b+a)
	  printf("The Triangle is Right Angled");
	  else
	  printf("The triangle is Scalene");
    }
    else
    printf("Triangle is not valid");

    printf("\nWant to try once again y/n");
    fflush(stdin);
    scanf("%c",&another);
   }while (another=='y');





    getch();
    return 0;
}
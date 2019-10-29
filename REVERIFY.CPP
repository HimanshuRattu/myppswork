#include<stdio.h>
#include<conio.h>
int main()
{   clrscr();
    float d1,d2,d3,d4,d5,rev;
    long int num;
    char another;
    do
  { printf("Enter a five digit number: ");
    scanf("%ld",&num);
    d1=(num%10);
    d2=(num%100)/10;
    d3=(num%1000)/100;
    d4=(num%10000)/1000;
    d5=(num/10000);

    rev=d1*10000+d2*1000+d3*100+d4*10+d5;
    printf("\nThe Reversed number is: %f",rev);
    if (num==rev)
     printf("\nThe two numbers are same");
    else
     printf("\nThe two numbers are not same");

    printf("\nWant to try once again y/n\n");
    fflush(stdin);
    scanf("%c",&another);
   }while (another=='y');
    getch();
    return 0;
}
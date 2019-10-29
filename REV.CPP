#include<stdio.h>
#include<conio.h>
int main()
{   clrscr();
    int d1,d2,d3,d4,d5,rev;
    long num;
    char another;
    do
  { printf("Enter a five digit number: ");
    scanf("%ld",&num);
    d1=(num%10);
    d2=(num%100)/10;
    d3=(num%1000)/100;
    d4=(num%10000)/1000;
    d5=(num/1000);

    rev=d5*d4*d3*d2*d1;
    printf("\nThe Reversed number is: %d",rev);
    printf("\nWant to try once again y/n\n");
    fflush(stdin);
    scanf("%c",&another);
   }while (another=='y');
    getch();
    return 0;
}
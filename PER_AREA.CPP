#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    char another;
    int l,b,peri,area;
    do
   { /*Start writing here only if you defined value*/
   printf("Enter the Length of Rectangle:");
   scanf("%d",&l);
   printf("Enter the Breadth of Rectangle:");
   scanf("%d",&b);

   area=l*b;
   peri=2*(l+b);
   if (peri>area)
    printf("Perimeter is greater than its area");
   else
    printf("Perimeter is smaller than its area");

     /*stop here*/
    printf("\nWant to try once again y/n");
    fflush(stdin);
    scanf("%c",&another);
   }while (another=='y');





    getch();
    return 0;
}
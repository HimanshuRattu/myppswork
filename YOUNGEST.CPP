#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    char another ;
    int a1,a2,a3       ;
    do
  { printf("Enter Ram's age:");
    scanf("%d",&a1);
    printf("Enter Shyam's age:");
    scanf("%d",&a2);
    printf("Enter Ajay's age:");
    scanf("%d",&a3);
      if(a1<a2&&a1<a3)
      printf("Ram is youngest");
     else if(a2<a3&&a1<a3)
      printf("Shyam is Youngest");
     else if(a3<a1&&a3<a2)
      printf("Ajay is youngest");
     else if(a1==a2&&a2==a3)
      printf("They have same age");



      printf("\nDo you want to check ages again?(y/n)");
      fflush(stdin);
      scanf("%c",&another);

     }while (another=='y');

    getch();
    return 0;
}
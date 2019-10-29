#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    char another ;
    int a1,a2,a3       ;
    do
  { printf("Enter Number 1:");
    scanf("%d",&a1);
    printf("Enter Number 2:");
    scanf("%d",&a2);
    printf("Enter Number 3:");
    scanf("%d",&a3);
	  /* else*/ if(a1==a2||a2==a3||a3==a1)
     {
	   if(a3<a1&&a3<a2)
      printf("Number 1 and Number 2 are same and they are Greatest");
      else if(a1<a3&&a1<a2)
      printf("Number 2 and Number 3 are same and they are Greatest");
      else if(a2<a1&&a2<a3)
      printf("Number 1 and Number 3 are same and they are Greatest");
      else if(a3>a1&&a3>a2)
      printf("Number 3 is Greatest");
      else if(a1>a3&&a1>a2)
      printf("Number 1 is Greatest");
      else if(a2>a1&&a2>a3)
      printf("Number 2 is Greatest");
     }
     else if(a1>a2&&a1>a3)
      printf("Number 1 is Greatest");
     else if(a2>a3&&a1>a3)
      printf("Number 2 is Greatest");
     else if(a3>a1&&a3>a2)
      printf("Number 3 is Greatest");

     else if(a1==a2&&a2==a3)
      printf("They are same numbers");



      printf("\nDo you want to check ages again?(y/n)");
      fflush(stdin);
      scanf("%c",&another);

     }while (another=='y');

    getch();
    return 0;
}
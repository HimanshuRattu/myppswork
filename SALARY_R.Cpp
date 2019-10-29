#include<stdio.h>
#include<conio.h>
 void main()
{ clrscr();
  float basic ,allo,rent,gross;
  printf("Enter Basic Salary:")  ;
  scanf("%f",&basic);
  allo=0.4*basic;
  rent=0.2*basic;

  gross=basic + allo + rent;
  printf("Basic salary:%f\n",basic)       ;
  printf("Dearness Allowence:%f\n",allo)  ;
  printf("House Rent:%f\n",rent)  ;
  printf("\n")	  ;
  printf("Gross Salary:%f\n",gross) ;



  getch();

}

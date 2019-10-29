#include<stdio.h>
#include<conio.h>

int main()
{ float km,m ,feet ,inch,cm;
  printf("Enter distance between 2 Cities(in KM):\n");
  scanf("%f",km) ;
  m=km*1000;
  feet=m*3.28;
  inch=feet*12;
  cm=m*100;

  printf("Distance in meters:%f\n",m);
  printf("Distance in feet:%f\n",feet);
  printf("Distance in inches:%f\n",inch);
  printf("Distance in centimeters:%f\n",cm) ;

  getch();

}
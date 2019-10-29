#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{       clrscr();
	float l1,l2,g1,g2, D, x1, x2;

	printf("\nEnter the values of latitude L1 : ");
	scanf("%f",&l1);
	printf("\nEnter the values of longitude G1 : ");
	scanf("%f", &g1) ;


	printf("\nEnter the values of latitude L2 : ");
	scanf("%f",&l2);


	printf("\nEnter the values of longitude G2 : ");
	scanf("%f", &g2) ;
	x2= sin(l1)*sin(l2);
	x1= cos(l1)*cos(l2)*cos(g2-g1);

	D = 3963*acos(x1+x2);


	printf("\nDistance : %f", D);

	getch();
	return 0;
}
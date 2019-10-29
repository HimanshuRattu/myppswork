#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{       clrscr();
	float l1,l2,g1,g2, D, x1, x2,a,c,d;

	printf("\nEnter the values of latitude L1 : ");
	scanf("%f",&l1);
	printf("\nEnter the values of longitude G1 : ");
	scanf("%f", &g1) ;


	printf("\nEnter the values of latitude L2 : ");
	scanf("%f",&l2);


	printf("\nEnter the values of longitude G2 : ");
	scanf("%f", &g2) ;
	x2=(g2-g1)/2  ;
	x1=(l2-l1)/2   ;
	a=pow(sin(x1),2) + cos(l1)*cos(l2)* pow(sin(x2),2)     ;

       //	D = 3963*acos(x1+x2);
	c=2*atan2(sqrt(a),sqrt(1-a)) ;
	d=3961*c                      ;


	printf("\nDistance : %f", d);

	getch();
	return 0;
}
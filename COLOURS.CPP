#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()

{       clrscr();

	float r, g, b, c, m, y, k, w = 0;
	
	printf("\nEnter the color values of R, G and B : ");
	scanf("%f%f%f", &r, &g, &b);

	r = r/ 255;
	g = g/ 255;
	b = b/ 255;

	if(w < r)
	   w = r;

	if(w < g)
	   w = g;

	if(w < b)
	   w = b;

	c = ((w - r) / w)*100;
	m = ((w - g) / w)*100;
	y = ((w - b) / w)*100;
	k = (1 - w)*100;

	printf("\nC : %f\nM : %f\nY : %f\nK : %f", c,m,y,k);

	getch();
	return 0;
}


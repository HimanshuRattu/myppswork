#include<stdio.h>
#include<conio.h>
int main()
{
  clrscr();
  int tmp,n100, n50, n10, n5, n2, n1, num;

  printf("\nEnter the amount : ");
  scanf("%d", &num);
	tmp=num;
  n100=num / 100;
  num=num % 100;

  n50=num / 50;
  num=num % 50;

  n10=num / 10;
  num=num % 10;

  n5=num / 5;
  num=num % 5;

  n2=num / 2;
  num=num % 2;

  n1=num / 1;

  printf("\n\nTo give amount of %d you have to give : \n",tmp);
  printf("%d of notes of hundred\n", n100);
  printf("%d of notes of fifty\n", n50);
  printf("%d of notes of ten\n", n10);
  printf("%d of notes of five\n", n5);
  printf("%d of notes of two\n", n2);
  printf("%d of notes of one\n", n1);

  getch();
  return 0;
}
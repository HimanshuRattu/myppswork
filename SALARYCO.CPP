#include<stdio.h>
#include<conio.h>
int main()
{   clrscr();
    float sal;
    printf("Enter The Salary");
    scanf("%f",&sal);
    if (sal>=25000&&sal<=40000?printf("Manager\n"):
    (sal>=15000&&sal<25000?printf("Accountant"):printf("Clerk")))



    getch();
    return 0;
}
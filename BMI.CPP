#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{   clrscr();
    float w,h,bmi;
    printf("Enter the height in meters:") ;
    scanf("%f",&h);
    printf("Enter the weight in kilograms:") ;
    scanf("%f",&w);


    bmi= w/(pow(h,2))  ;

    printf("\nBMI=%f\n",bmi)   ;

    if (bmi<=15.0)
    printf("Your BMI Category is Starvation") ;

    else if(bmi>=15.1&&bmi<=17.5)
    printf("Your BMI Category is Anorexic");

    else if(bmi>=17.6&&bmi<=18.5)
    printf("Your BMI Category is Underweight");

    else if(bmi>=18.6&&bmi<=24.9)
    printf("Your BMI Category is Ideal");

    else if(bmi==25)
    printf("Your BMI Category is Overweight");

    else if(bmi>25.0&&bmi<=29.9)
    printf("Your BMI Category is Pre-Obese");

    else if(bmi>=30.0&&bmi<=39.9)
    printf("Your BMI Category is Obese");

    else if(bmi>=40.0)
    printf("Your BMI Category is Morbidly Obese");

    getch();
    return 0;
}
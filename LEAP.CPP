#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

    int leap_days=0, ch,neg, pos, non_leap, year,dif,l, a ;
    char another;
      clrscr();
    printf("Enter a Year :");
    scanf("%d",&year);
    dif=abs(year-2001) ;
     l=dif/4;

     //will run if year is less than 2001
      if (year<2001)
      {
       for (int i=year; i<2001;i++)
	   if (i%4==0)
	     {  leap_days=leap_days+1;
		   printf("Leap_days counter%d \n",leap_days);
	     }
	}


 //   if(year<2000);
   // non_leap=dif-l;
//*   int x=0;
  // if(year==2000)
    // x=1;
    //  if(year>=2001)

  //	leap_days=dif/4;
    //	else
     //	  leap_days=(dif/4)+x;
   //   ch=(non_leap*365)+(l*366)    ;

      ch=(dif*365)+leap_days;
    //  else
    //	ch=(non_leap*365)+((l+1)*366)    ;
   a=ch%7        ;
   printf("value ofa =%d %d  %d   number of days= %d!",leap_days, dif, a, ch);
    if(year>=2001)
    {
	  if (a==0)
	     printf("1st January is monday!");
      else if (a==1)
	     printf("1st January is tuesday!");
      else if (a==2)
	     printf("1st January is wednesday!");
      else if (a==3)
	     printf("1st January is thursday!");
      else if (a==4)
	     printf("1st January is friday!");
      else if (a==5)
	     printf("1st January is saturday!");
      else if (a==6)
	     printf("1st January is sunday!");
     }
     else
    {      a=7-a; //subtract 1 for year 2000
	  if (a==0)
	     printf("1st January is monday!");
      else if (a==1)
	     printf("1st January is tuesday!");
      else if (a==2)
	     printf("1st January is wednesday!");
      else if (a==3)
	     printf("1st January is thursday!");
      else if (a==4)
	     printf("1st January is friday!");
      else if (a==5)
	     printf("1st January is saturday!");
      else if (a==6)
	     printf("1st January is sunday!");

     }
	  getch();
    return 0;
}
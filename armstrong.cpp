#include <stdio.h>
#include<conio.h>
#include<math.h>

int numDigits(int n)
{
   int i=0;
   while(n>0)
   {
       n=n/10;
       i++;
      
   }
   return i;
   
    
}
int main()
{
    int num,cube=0,rem,org,n;
    printf("enter  the number");
    scanf("%d",&num);
org=num;
n=numDigits(num);

    while(num>0)
    {

rem=num%10;
cube=cube+pow(rem,n);
num=num/10;
}
printf("cube %d\n",cube);
//printf("original %d\n",org);
    if(org==cube)
    {
        printf("no is armstrong");
    }
    else
    {
        printf("no is not armstrong");
    }
    return 0;
}

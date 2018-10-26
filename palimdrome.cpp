
#include <stdio.h>
#include<conio.h>


int main()
{
    int num,rev=0,rem,org;
    printf("enter  the number");
    scanf("%d",&num);
org=num;
    while(num>0)
    {

rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("reverse %d\n",rev);
printf("original %d\n",org);
    if(org==rev)
    {
        printf("no is palimdrome");
    }
    else
    {
        printf("no is NOT palimdrome");
    }
    return 0;
}


#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char str1[10],str2[10],temp;
   int i,j,len1,len2;
   printf("enter the first string");
   scanf("%s",str1);
   printf("enter the second string");
   scanf("%s",str2);
   len1=strlen(str1);
   //printf("length of first and second string is: %d\n",len1);
       len2=strlen(str2);

       //printf("length of first and second string is: %d",len2);

   if(len1!=len2)
   {
       printf("string are not anagram");
       return 0;
   }
   printf("after sorting first string");
   for(i=0;i<len1;i++)
   {
       for(j=i+1;j<len1;j++)
       {
           if(str1[i]>str1[j])
           {
            temp=str1[i];
            str1[i]=str1[j];
            str1[j]=temp;
           }
            
       }
   }
   printf(" : %s\n",str1);
   
   printf("after sorting second string");
   for(i=0;i<len2;i++)
   {
       for(j=i+1;j<len2;j++)
       {
           if(str2[i]>str2[j])
           {
            temp=str2[i];
            str2[i]=str2[j];
            str2[j]=temp;
           }
       }
   }
   printf(" : %s\n",str2);
   
   for(i=0;i<len1;i++)
   
   {
       if(str1[i]!=str2[i])
       {
           printf("string are not anagram");
           return 0;
       }
   }
   
   
   printf("string are anagram");
   return 0;
}

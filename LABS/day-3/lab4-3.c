/* use array to find summation and average*/
#include <stdio.h>

int main()
{
   int arr[10];
   int i;
   for(i=0;i<10;i++)
   {
       printf("enter the number %d :",i);
       scanf("%d",&arr[i]);
       
   }
   
  int sum=0;
  float avr;
 for(i=9;i>=0;i--)
 {
    sum =sum +arr[i];
    
 }
 printf("sum =%d\n",sum);
 avr =sum/10;
 printf("average =%f",avr);
 
 
    return 0;
}

/*user write 10 numbers and find sum and average them*/
#include <stdio.h>

int main()
{
 int i=1,n,avr,sum;
 
 printf("enter the numbers\n");
 
   sum=0; 
  for(;i<=10;i++)
  { 
      printf("number %d : ",i);
      scanf("%d",&n);
 
    sum+=n;
  }
avr=sum/10;
printf("sum =%d\n",sum);
printf("average =%d",avr);   
    return 0;
}

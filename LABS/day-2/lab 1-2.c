/* know the number  is odd or even*/
#include <stdio.h>

int main()
{
   int num ,a;
   printf("enter the nember ");
   scanf("%d",&num);
    a =num%2;
    
    if(0==a)
    printf("the number is even");
    else 
    printf("the number is odd");

   
   
    return 0;
}





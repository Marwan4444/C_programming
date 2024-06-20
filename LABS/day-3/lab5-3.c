/*user enter 10 numbers and print it in reverse*/
#include <stdio.h>


int main()
{
   int arr[10];
   int i;
   for(i=0;i<10;i++)
   {
       printf("enter teh number %d :",i);
       scanf("%d",&arr[i]);
       
   }
   
   
 for(i=9;i>0;i--)
 {
     printf("%d\n",arr[i]);
 }
 
    return 0;
}

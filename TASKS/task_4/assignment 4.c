/* find number that have  1 only  in binary number  */
#include <stdio.h>

int main()
{
    int n=0;
   printf("enter the number :");
   scanf("%d",&n);


 int  c=n&(n-1);
 printf("%d\n",c );
 if (c==0)
 {
 printf("ture");
 }
else
  printf("false");


    return 0;
}

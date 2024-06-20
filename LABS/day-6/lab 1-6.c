 /* struct  */
#include <stdio.h>
struct emp
{
    
    
    int s;
    int b;
    int d;
    
} ahmed, waleed, amr;


int main()
{
   printf("enter ahmed salary");
    scanf("%d",& ahmed.s);
   printf("enter ahmed bonus");
   scanf("%d",& ahmed.b);
  printf("enter ahmed deduction");
   scanf("%d",& ahmed.d);
 

    printf("enter waleed salary");
    scanf("%d",& waleed.s);
   printf("enter awaleed bonus");
   scanf("%d",& waleed.b);
  printf("enter waleed deduction");
   scanf("%d",& waleed.d);
 
    printf("enter amr salary");
    scanf("%d",& amr.s);
   printf("enter amr bonus");
   scanf("%d",& amr.b);
  printf("enter amr deduction");
   scanf("%d",& amr.d);
 
 
 int t =ahmed.s+ahmed.b-ahmed.d+waleed.s+waleed.b-waleed.d+amr.s+amr.b-amr.d;
 
 printf("total =%d",t);
 
  
    return 0;
}

/*sum to 2 numbers complex */
#include <stdio.h>


 typedef struct complex
{
    float r;
    float i;
}cn;


int main()
{

 cn n1 ,n2;
printf("enter  number  real 1 :");
scanf("%f",&n1.r);
printf("enter  number  imag 1 :");
scanf("%f",&n1.i);
printf("\nenter  number  real 2 :");
scanf("%f",&n2.r);
printf("enter  number  imag 2 :");
scanf("%f",&n2.i);
     
 cn s;
 s.r=n1.r+n2.r;
 s.i=n1.i+n2.i;
 
 printf("%.1f + %.1fi ",s.r,s.i); 

    return 0;
}

/*find the perimeter of rectangle*/
#include <stdio.h>


int main()
{

int l,w,p;
printf("enter the lenght :");
scanf("%d",&l);
printf("enter the wide :");
scanf("%d",&w);

p=(l+w)*2;
printf("perimeter = %d",p);


 return 0;

}



//*****************************************************************




/*find the total ,average and percentage of five subjects*/

#include <stdio.h>


int main()
{

int a,b,c,d,f,sum;
float avr,per;
printf("enter marks of five subjects :\n");

scanf("%d \n %d \n %d \n %d \n %d",&a,&b,&c,&d,&f);

sum =a+b+c+d+f;
avr =sum/5;
per =sum/500;
 printf("total = %d \n",sum);
 printf("average = %f\n",avr);
 printf("percentage =%f",per);

 return 0;

}

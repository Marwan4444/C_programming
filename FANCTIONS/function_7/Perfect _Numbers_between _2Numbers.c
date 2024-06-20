#include <stdio.h>
#include <stdlib.h>

/*****************************To print the perfect numbers between 2 numbers*****************************/

int perfectnumber (int num);
int main()
{
     int lowestNum ;
     int highesttNum ;
     int flag=0;

       printf("Enter the range\nthe lowest :");
       scanf("%i",&lowestNum);
       printf("\nthe highest : ");
        scanf("%i",&highesttNum);

        for( int i=lowestNum; i<highesttNum; i++)
        {
            perfectnumber(i);
            if(perfectnumber(i))
            {
                printf("the perfect number is %i\n",i);
            }

        }


    return 0;
}


int perfectnumber (int num)
{
       int sumfactor=0;
   for ( int i =1 ;i< num;i++)
   {

       if(num%i==0)
       {
           sumfactor+=i;
       }
   }
   if(num == sumfactor)
   {
       return 1;
   }
   else
   {
      return 0;
   }

}

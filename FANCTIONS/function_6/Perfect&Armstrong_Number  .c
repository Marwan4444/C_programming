#include <stdio.h>
#include <stdlib.h>

/*

            perfect number  is  sum of factor of number == number

            armstrong number is cube of  his digits ==number   153 == (1*1*1)+(5*5*5)+(3*3*3)


*/


void armstrongNumber(int num);
void perfectnumber (int num);
int main()
{

   int number =28;
   printf("Enter the number :");
   scanf("%i",&number);
   perfectnumber(number);
   armstrongNumber(number);


    return 0;
}


void perfectnumber (int num)
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
       printf("the number is perfect\n");
   }
   else
   {
      printf("the number is not perfect\n");
   }

}



void armstrongNumber(int num)
{

   int digit=0;
   int sum=0;
   int testNum =num;

       while(testNum!=0)
    {
        digit = testNum % 10;  // find the last digit of the number
        sum += digit * digit * digit;  //calculate the cube of the last digit and adds to sum
        testNum = testNum/10;
    }
    if( num ==sum)
    {
        printf("the number is armstrong\n");
    }
    else
    {
        printf("the number is  not armstrong\n");

    }

}

#include <stdio.h>
#include <stdlib.h>

/**********To get prime number**********/



int getprime (int num);

int main()
{
    int number =0;
    printf("Enter the numbr :\n");
    scanf("%i",&number);
    getprime(number);


    return 0;
}



int getprime (int num)
{
      char flag=0;
    for (int i=0;i<=7; i++ )
    {
        if( num %2 != 0 |num ==2)
        {
            flag=1;
        }

    }

    if(1==flag)
    {
        printf("the number is prime");
    }
    else
    {
         printf("the number is  not prime");
    }
}

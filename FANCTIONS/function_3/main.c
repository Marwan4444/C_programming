#include <stdio.h>
#include <stdlib.h>
/*
TO print binary number
                5 2 1
                2 2 0
                1 2 1


*/

void printBinary(float number);


int main()
{


    printBinary(6);

    return 0;
}

void printBinary(float number)
 {

    int  test =0;
    int arr[8];

    for( int i =1 ;i<=8 ;i++)
    {
        test=number/2;


        if( number >= (test*2)+1 )
        {

           arr[i-1]=1;


        }
        else
        {

            arr[i-1]=0;

        }
        number=number/2;




    }

    for( int i=7 ;i>=0;i--)
    {

        printf("%i",arr[i]);
    }

 }





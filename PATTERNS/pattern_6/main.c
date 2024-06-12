#include <stdio.h>
#include <stdlib.h>

/*

                            *
                           * *
                          * * *
                         * * * *
                        * * * * *


*/

int main()
{
    unsigned int rows =5;

    for ( int i =0 ; i< rows; i++)
    {
        for ( int j =rows ; j>i ;j-- )
        {

            printf(" ");
        }
        for ( int k =0; k<=i; k++)
        {

            printf("* ");
        }
        printf("\n");
    }





    return 0;
}

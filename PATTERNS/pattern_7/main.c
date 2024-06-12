#include <stdio.h>
#include <stdlib.h>

/*

                    *
                   * *
                  * * *
                 * * * *
                * * * * *
                 * * * *
                  * * *
                   * *
                    *



*/

int main()
{
    int rows=5;
    // top
    for ( int i =0 ; i< rows; i++)
    {
        for ( int j =rows ; j>i ; j-- )
        {

            printf(" ");
        }
        for ( int k =0; k<=i; k++)
        {

            printf("* ");
        }
        printf("\n");
    }


    printf("  ");
    rows--;

    // bottom
    for ( int i =0 ; i<rows ; i++)
    {


        for ( int j =(i-rows); j <0  ; j++)
        {

            printf("* ");
        }
        printf(" ");
        printf("\n");
        for(int k=0 ; k<=i+2; k++)
        {
            printf(" ");
        }
    }
    return 0;
}

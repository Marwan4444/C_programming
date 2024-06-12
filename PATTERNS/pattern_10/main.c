#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

/*



            * * * * *
             * * * *
              * * *
               * *
                *
               * *
              * * *
             * * * *
            * * * * *




*/

int main()
{

    int rows =5;

    for ( int i =0 ; i<rows ; i++)
    {


        for ( int j =(i-rows); j <0  ; j++)
        {

            printf("* ");
                Sleep(150);
        }

        printf("\n");

        for(int k=0 ; k<=i; k++)
        {
            printf(" ");
            Sleep(150);
        }

    }

    printf("\r");   // cros



    for ( int i =0 ; i< rows; i++)
    {
        if(i==0)
        {
            continue;
        }

        for ( int j =rows-1 ; j>i ; --j )
        {

            printf(" ");
            Sleep(150);

        }
        for ( int k =0; k<=i; k++)
        {

            printf("* ");
            Sleep(150);
        }
        printf("\n");


    }
    return 0;
}

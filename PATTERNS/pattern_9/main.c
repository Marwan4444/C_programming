#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
/*

                            *
                           * *
                          *   *
                         *     *
                        * * * * *


*/
int main()
{
unsigned int rows =5;
unsigned int flag =0;
int j =rows ;


for ( int i =0; i<rows ;i++)
{

        for ( int j =rows ; j>i ;--j )
        {

            printf(" ");
            Sleep(100);
        }
        for ( int k =0; k<=i; k++)
        {
            if( i==0 | i==1 | i==rows-1 )
            {
                  printf("* ");
                  Sleep(100);

            }

/*           else if(j>i)
            {
                printf("* ");
                Sleep(100);
                break;
            }*/



        }
        for( int w =i-1; w>0 & i!=rows-1 ; w--)
        {
            printf("  ");
            Sleep(100);
            flag =1;

        }
        if(flag ==1)
        {
            printf("*");
            Sleep(100);
            flag =0;
        }

        printf("\n");

}



    return 0;
}

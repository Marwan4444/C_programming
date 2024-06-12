#include <stdio.h>
#include <stdlib.h>

/*


                * * * * *
                 * * * *
                  * * *
                   * *
                    *




*/

int main()
{
   signed int rows =5;

   for ( int i =0 ; i<rows ; i++)
   {


       for ( int j =(i-rows);j <0  ; j++)
       {

           printf("* ");
       }


       printf("\n");
       for(int k=0 ; k<=i;k++)
       {
           printf(" ");
       }

   }



    return 0;
}

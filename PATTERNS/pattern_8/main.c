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
   int rows =5 ;
   for ( int i =0;i<rows ;i++)
   {
       for ( int j =0 ;j<=i; j++)
       {

           printf("* ");
       }
       printf("\n");

   }

   rows--;

   for ( int i=0 ;i<rows ;i++)
   {
       for ( int j=rows-i;j>0 ;j--)
       {
            printf("* ");
       }
       printf("\n");
   }



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*4


                * * * * *
                * * * *
                * * *
                * *
                *


*/

int main()
{

   unsigned int rows=5;

   for(int i =0; i<rows ; i++)
   {
       for( int j =(rows -1);j>=0 ;j--)
       {
           printf("* ");
       }
       printf("\n");
       rows--;
       i--;
   }




    return 0;
}

#include <stdio.h>
#include <stdlib.h>

signed postion =3;  /*postion bit*/

int main()
{
   signed byte=0xff;            //1111 1111
   /**************clear bit ***************/
   byte =byte&(~(1<<postion)); // 1111 0111
   /**************************************/
    printf("byte = 0X%X\n",byte);


/*******************************************************************************************************************/


    byte=0;                  //0000 0000
    /**************set bit ***************/
    byte=byte|(1<<postion);  //0000 1000
    /**************************************/
    printf("byte = 0X%X\n",byte);


/*******************************************************************************************************************/

    byte =0XFF;             //1111 1111
    /**************clear bit ***************/
    byte=byte^(1<<postion); //1111 0111
   /**************************************/
    printf("byte = 0X%X\n",byte);




    return 0;
}

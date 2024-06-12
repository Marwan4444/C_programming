#include <stdio.h>
#include <stdlib.h>

/*

             *****
             *  *
             *****

*/



int main()
{

    signed int counter1,counter2;
    for(counter1=0;counter1<3;counter1++)
    {
        if((0==counter1)||(counter1==2))
        {
            for(counter2=0;counter2<5;counter2++)
            {
                printf("*");
            }

        }
        else
        {
            for(counter2=0;counter2<5;counter2++)
            {
                if(counter2==0 || counter2==3)
                {
                    printf("*");
                }
                else
                {
                   printf(" ");
                }
            }
        }
        printf("\n");
    }


for(counter1=0;counter1<3;counter1++)
{

    for(counter2=0;counter2<5;counter2++)
    {
        if(counter1==0||counter1==2||counter2==0||counter2==3)
        {

            printf("*");
        }
        else
        {
            printf(" ");

        }
    }
    printf("\n");
}



    return 0;



}

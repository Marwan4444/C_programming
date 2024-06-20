/**************************

appleication to check the password 3 times ( lock )


*****************************/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    unsigned int pass[4]= {'d','o','h','a'};
    unsigned int UserPass[4]= {0};
    unsigned int index=0;
    unsigned int flag =0;
    unsigned int tries =0;

    printf("enter the password : \n");

    while (tries<3)
    {



        for( index=0; index <4; index++)
        {

            scanf("%c",&UserPass[index]);
            fflush(stdin); // clear buffer

        }
        printf("please wait ");

        for( index=0; index <15; index++)
        {

            printf(".");
            Sleep(100);
        }
        printf("\n");

        for(index=0; index<4; index++)
        {
            if(UserPass[index]!=pass[index])
            {
                flag=1;

                break;
            }


        }
        if(flag==1)
        {
            printf("password is wrong !!\n");
            printf("\n*********************************\n\n");
            printf("enter the password  again: \n");
            tries++;

        }
        else
        {
            printf("welcome marwan");
            break;
        }

    }
    return 0;
}

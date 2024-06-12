// c program to print left half pyramid pattern of
#include <stdio.h>

int main()
{

    unsigned int rows = 5;
    /*
    printf("enter the rows :\n");
    scanf("%i",&rows);
    */

    for(int i =0; i<rows ;i++)
    {
        for(int j =0;j<=i ;j++)
        {
            printf("* ");

        }

        printf("\n");
    }




	return 0;
}


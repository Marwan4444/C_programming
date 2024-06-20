#include <stdio.h>
#include <stdlib.h>

/*************************************** (1!/1)+(2!/2)+(3!/3)+(4!/4)+(5!/5)***************************************/


int serise (int num);


int main()
{
    int number =0;
    printf("Enter the  number :");
    scanf("%i",&number);
    printf("the Result = %i ", serise(number));


    return 0;
}

int serise (int num)
{
    int fact =1;
    int result=0;
    for(int i =1; i<=num; i++)
    {

        fact *=i;
        result +=(fact/i) ;

    }



    return result ;
}

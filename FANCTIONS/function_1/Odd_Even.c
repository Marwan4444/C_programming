#include <stdio.h>
#include <stdlib.h>


void Odd_Even( int  num);
int main()
{
    unsigned int number=0;
    printf("enter the number :\n");
    scanf("%i",&number);

    Odd_Even(number);

    return 0;
}

void Odd_Even( int  num)
{
    if(num%2==0)
    {
        printf(" the number is Even ");
    }
    else
    {
        printf(" the number is Odd ");
    }
}

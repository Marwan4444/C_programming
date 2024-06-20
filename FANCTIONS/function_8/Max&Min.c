#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={22,33,11,55,10};
    int max=0;
    int min=0;

    for( int i =0 ; i<5 ; i++)
    {
        if(arr[i]>arr[max])
        {
            max =i;
        }
        else if (arr[i]<arr[min])
        {
            min=i;
        }

    }
    printf(" the max number :%i\n",arr[max]);
    printf(" the min number :%i",arr[min]);



    return 0;
}

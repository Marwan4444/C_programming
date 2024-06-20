#include <stdio.h>
#include <stdlib.h>

/* return array by function  */

unsigned int * returnArray(void);
int main()
{
    unsigned int *ptr=0;
    ptr=returnArray();
    for(int counter=0; counter<5;counter++)
    {
        printf("element %i = %i\n",counter+1,*ptr);
        ptr++;
    }

    return 0;
}

 unsigned int * returnArray(void)
{
    static unsigned int arr[5]={5,24,36,41,5} ;
    return arr;
}

#include <stdio.h>
#include <stdlib.h>

/* to large element in array */

int getMax(unsigned int arr[]);
int main()
{

     /*enter the array*/
    int max=0;
   unsigned int index;
    printf("Enter the number of element : \n");
    scanf("%d",&index);
    unsigned int arr[index];


    printf("Enter the elements :\n");
    for (int i =0 ;i<index; i++)
    {
        scanf("%d",&arr[i]);
    }

        /*get to largest number */

    for(int i =0;i<index; i++)
   {
       if(arr[i]>=arr[max])
       {
           max=i;
       }

   }


   printf("the max element in arr = %i",arr[max]);
    return 0;
}

int getMax(unsigned int arr[])
{
    int max=0;
    unsigned int index;

    for(int i =0;i<index; i++)
   {
       if(arr[i]>=arr[max])
       {
           max=i;
       }

   }
   return arr[max];
}

 /* memory allocation  */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int  n=0;
    printf("enter the  numbrs of element :");
    scanf("%d",&n);
    int *ptr=(int*) malloc (n *sizeof(int));
    
    for (int i=0;i<n;i++)
    {
        printf("enter the number  ");
        scanf("%d",ptr+i);
    }
    
    for (int k=0;k<n-1;k++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                int x =ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=x;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
    return 0;
}

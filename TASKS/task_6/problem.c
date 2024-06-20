/* find missing number in array */
#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    printf("enter the size of  array :");
    scanf("%d",&n);
    printf("enter the nmbers :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int sum1 =0 ,sum2 =0;
    
    for (int i=0;i<n;i++)
    {
        sum1+=arr[i];
    }
    
    for (int j =0;j<=n;j++)
    {
        sum2+=j;
    }
    
    int res =sum2-sum1;
    printf(" missing number is %d",res);
    

    return 0;
}

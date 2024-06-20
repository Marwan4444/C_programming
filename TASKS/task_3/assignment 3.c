/* user enter the size and elements of array and print the reversed elements **/

#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int *ptr;
    ptr =arr;

    printf("enter the size  :");
    scanf("%d",&n);
    printf("enter the elements :\n");

    for(int i=0; i<n; i++)
    {
        scanf("%d",ptr);
        ptr++;
    }

    ptr =arr;

    printf("the reversed elements \n");

    for (int i=n-1; i>=0; --i)
    {
        printf("%d\n",*(ptr+i));
    }




    return 0;
}



/**************************************************************/



/* user enter the size and elements of array and search  aboout the element **/
/*
#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int *ptr;
    ptr =arr;

    printf("enter the size  :");
    scanf("%d",&n);
    printf("enter the elements :\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }

  ptr =arr;
    int n1;
  printf("enter the element to search :");
  scanf("%d",&n1);
  int i;
  for  (i=0;i<=n;i++)
  {


      if (n1==*(ptr+i))
      {
          printf("the element is found");
          break;
      }

  }

  if(i>n )
  printf("the element is not found");





    return 0;
}

*/



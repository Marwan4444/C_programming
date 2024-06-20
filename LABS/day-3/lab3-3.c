
/*print from n to 1*/
#include <stdio.h>
int fun(int);

int main()
{
   int n=0;
   scanf("%d",&n);
   fun(n);
 
    return 0;
}

int fun(int n) 
{
     if (n<1)
     return 1;
       printf("%d\t",n);
     fun(n-1);
}

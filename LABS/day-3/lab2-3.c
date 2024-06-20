
/* max number */
#include <stdio.h>
 
int max (int x,int y);  
  
int main()
{
  
   int res,x,y;
  printf("enter 1 value"); 
    scanf("%d",&x);
    printf("enter 2 value"); 
    scanf("%d",&y);

res= max (x,y);
printf("the max =%d",res);
    return 0;
}

int max (int x,int y)
{
    int z;
    if(x>y)
    z=x;
    else
    z=y;
  
    
    return z;
}    


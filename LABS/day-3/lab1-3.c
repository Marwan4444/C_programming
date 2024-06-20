/*swap  2 number*/
#include <stdio.h>
 int x=10;
 int y=20;
void swap ();  
  
int main()
{
   printf("x=%d\n",x);
   printf("y=%d\n",y);
   swap();
   printf("x=%d\n",x);
   printf("y=%d",y);
    
    return 0;
}

void swap ()
{
    int z; 
    z=x;
    x=y;
    y=z;
}
 


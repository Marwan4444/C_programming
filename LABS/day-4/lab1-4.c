/* change the value using  pointer */
#include <stdio.h>

int main()
{
    int x=10,*ptr=&x;
    printf("x befor :%d\n",x);
    *ptr=20;
    printf("x after :%d",x);

    return 0;
}

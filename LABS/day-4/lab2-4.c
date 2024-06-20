/* pointers and function */
#include <stdio.h>
void add(int*ptr1, int*ptr2, int*ptr3);

int main()
{
int x ,y ,sum;
printf("enter value 1 :");
scanf("%d",&x);
printf("enter value 2 :");
scanf("%d",&y);

add(&x,&y,&sum);

printf("sum=%d",sum);
    return 0;
}

void add(int *ptr1, int *ptr2, int *ptr3) 
{
    
    *ptr3=*ptr1+*ptr2;
    
    
    
}

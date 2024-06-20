/* multiply 2 array and sum the result of multiplication */
#include <stdio.h>


int main()
{
     int arr1[3]={1,2,3} ;
     int arr2[3]={1,2,3};
    int  mul=0,*ptr1,*ptr2;
    
    ptr1 = arr1;
    ptr2 =arr2;
    
    for (int i=0;i<3;i++)
    {
        
       mul+=*(ptr1+i)**(ptr2+i);

    }
    
    
    printf(" mul = %d",mul);
    
    
    return 0;
}

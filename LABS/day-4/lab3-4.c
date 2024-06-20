/* pointer and array */
#include <stdio.h>
;

int main()
{
     int arr[3]={1,2,3} ;
    int  sum =0,*ptr;
    
    ptr = arr;
    
    for (int i=0;i<3;i++){
        
        sum+=*(ptr);
        ptr++;
    }
    
    
    printf(" summation = %d",sum);
    
    
    return 0;
}

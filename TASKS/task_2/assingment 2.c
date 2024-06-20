/* multplication table**/
#include <stdio.h>

/*
int main()
{

int n;
int mul;
printf("enter teh number :");
scanf("%d",&n);

for (int i =0;i<=10;i++){

      mul=n*i;

      printf("%d*%d=%d\n",n,i,mul);

}



return 0;
}

/****************************************************************/

/*

//find the factors of the number
#include <stdio.h>


int main()
{

int n ,i ,f ;
printf("enter the number :");
scanf ("%d",&n);
printf("factors = ");

for (i=1;i<=n;++i)
{

   f=n%i;

    if (n%i==0){
    printf("\t %d",i);}
}



return 0;
}


*****************************************************************

*/

//count the digits of number
#include <stdio.h>


int main()
{

int i,c ,n ;
printf (" enter the number : ");
scanf("%d",&n);

while(n!=0){

    n=n/10;
    c++;
}
printf("the digits :%d",c);
return 0;
}


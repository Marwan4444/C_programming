/* enter the name of student and print the degrees of subjects */
#include <stdio.h>
 struct student 
 {
    int id;
    int math ;
    int arab;
    int eng;
    int fren;
     
     
 };
 
 
int main()
{
  
  typedef struct student std;
  std arr[10];
  
  
  for(int i=0;i<10;i++)
  {
      arr[i].id=i-1;
      arr[i].math=i+90;
      arr[i].arab=i+85;
      arr[i].eng=i+76;
      arr[i].fren=i+80;
      
  }
  
 int id=0;
 printf("enter the id :");
 scanf("%d",&id);
 
 if (id>0&&id<11)
 {
     printf("the grade of math :%d\n",arr[id-1].math);
      printf("the grade of arabic :%d\n",arr[id-1].arab);
       printf("the grade of english :%d\n",arr[id-1].eng);
        printf("the grade of french :%d\n",arr[id-1].fren);
     
 }
 else 
 printf("the id is not found");




    return 0;
}

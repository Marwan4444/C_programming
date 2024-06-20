
#include"stack_ds.h"

/**
  *@breief check stack is full
  *@parame pointer to stack
  *@retva  statues of initializtion
*/

static return_stack stack_full(stack_ds_M *mystack)
{
    return_stack ret;

    if(mystack->pointer_stack==STACK_MAX_SIZE-1)
    {
        ret =FULL;
    }
    else
    {
        ret =NOT_FULL;
    }

    return ret;
}

/**
  *@breief check stack is empty
  *@parame pointer to stack
  *@retva  statues of initializtion
*/

static return_stack stack_empty(stack_ds_M *mystack)
{
    return_stack ret;

    if(mystack->pointer_stack==INIT_POINTER_STACK)
    {
        ret =EMPTY;
    }
    else
    {
        ret =NOT_FULL;
    }

     return ret;
}

/**
  *@breief initializtion the pointer stack
  *@parame pointer to stack
  *@retva  statues of initializtion
*/

return_statues init_stack(stack_ds_M *mystack)
 {
     return_statues ret=R_NOK;

     if(mystack==NULL)
     {
         ret=R_NOK;
     }
     else
     {
         mystack->pointer_stack =INIT_POINTER_STACK;
         ret=R_OK;
     }

   return ret;

 }

/**
  *@breief add the element to the stack
  *@parame pointer to stack
  *@parame value that pushed
  *@retva  statues of initializtion
*/

 return_statues push_stack(stack_ds_M *mystack,uint32 value)
 {
    return_statues ret=R_NOK;


    if(mystack==NULL|| FULL==stack_full(mystack))
     {
         #ifdef STACK_DEBGE
          printf(" Error !! the stack  is full \n");
         #endif // STACK_DEBGE
         ret=R_NOK;
     }
     else
     {

         mystack->pointer_stack++;
         mystack->Date[mystack->pointer_stack] = value ;
        #ifdef STACK_DEBGE
          printf("the value  [%i] is pushed\n", value);
         #endif // STACK_DEBGE


         ret =R_OK;
     }
 }

/**
  *@breief get the the last element of the stack and decriment
  *@parame pointer to stack
  *@parame value that popped
  *@retva  statues of initializtion
*/

 return_statues pop_stack(stack_ds_M *mystack,uint32 *value)
 {
     return_statues ret =R_NOK;

     if(mystack == NULL || value == NULL || stack_empty(mystack) == EMPTY )
     {
        #ifdef STACK_DEBGE
          printf("Error!! the stack is empty\n");
         #endif // STACK_DEBGE

     }
     else
     {
       *value = mystack->Date[mystack->pointer_stack];
       mystack->pointer_stack--;
        #ifdef STACK_DEBGE
           printf("the value  [%i] is popped\n", *value);
         #endif // STACK_DEBGE

       ret=R_OK;
     }
     return ret;
 }


 /**
  *@breief get the the last element of the stack
  *@parame pointer to stack
  *@parame value that topped
  *@retva  statues of initializtion
*/
 return_statues top_stack(stack_ds_M *mystack,uint32 *value)
 {
          return_statues ret =R_NOK;

     if(mystack == NULL || value == NULL || stack_empty(mystack) == EMPTY )
     {
        #ifdef STACK_DEBGE
          printf("Error!! the stack is empty\n");
         #endif // STACK_DEBGE

     }
     else
     {
       *value = mystack->Date[mystack->pointer_stack];
        #ifdef STACK_DEBGE
           printf("the value  [%i] is top\n", *value);
         #endif // STACK_DEBGE

       ret=R_OK;
     }
     return ret;
 }

 /**
  *@breief get the size of stack
  *@parame pointer to stack
  *@parame size of the stack
  *@retva  statues of initializtion
*/

 return_statues size_stack(stack_ds_M *mystack,uint32 *stack_size)
 {
    return_statues ret =R_NOK;

     if(mystack == NULL || stack_size == NULL)
     {
        #ifdef STACK_DEBGE
          printf("Error!! \n");
        #endif // STACK_DEBGE


     }
     else
     {
        *stack_size = mystack->pointer_stack+1;
        #ifdef STACK_DEBGE
          printf("the size of stack is %i\n",*stack_size);
        #endif // STACK_DEBGE

       ret=R_OK;
     }
     return ret;
 }

 /**
  *@breief print all elements  of stack
  *@parame pointer to stack
  *@retva  statues of initializtion
*/

 return_statues display(stack_ds_M *mystack)
 {
    return_statues ret =R_NOK;

     if(mystack == NULL || stack_empty(mystack) == EMPTY )
     {
        #ifdef STACK_DEBGE
          printf("Error!! \n");
        #endif // STACK_DEBGE


     }
     else
     {
         uint32 counter = ZERO_INTI;
         printf("the elements in the stack :");
         for(counter;counter<=mystack->pointer_stack;counter++)
         {
             printf(" \t%i",mystack->Date[counter]);
         }
         printf("\n");

        ret=R_OK;
     }
     return ret;
 }

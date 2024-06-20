#ifndef STACK_DS_H
#define STACK_DS_H


#include <stdio.h>
#include <stdlib.h>

#include"std_type.h"

#define STACK_MAX_SIZE 5
#define STACK_DEBGE
#define INIT_POINTER_STACK -1

typedef struct stack_ds
 {
   sint32 pointer_stack;
   uint32 Date[STACK_MAX_SIZE];
 }stack_ds_M;

 typedef enum  return_stack
{
    FULL,
    NOT_FULL,
    EMPTY

}return_stack;

/**
  *@breief check stack is full
  *@parame pointer to stack
  *@retva  statues of initializtion
*/
static return_stack stack_full(stack_ds_M *mystack);

/**
  *@breief check stack is empty
  *@parame pointer to stack
  *@retva  statues of initializtion
*/

static return_stack stack_empty(stack_ds_M *mystack);

/**
  *@breief initializtion the pointer stack
  *@parame pointer to stack
  *@retva  statues of initializtion
*/

return_statues init_stack(stack_ds_M *mystack);

/**
  *@breief add the element to the stack
  *@parame pointer to stack
  *@parame value that pushed
  *@retva  statues of initializtion
*/

return_statues push_stack(stack_ds_M *mystack,uint32 value);

/**
  *@breief get the the last element of the stack and decriment
  *@parame pointer to stack
  *@parame value that popped
  *@retva  statues of initializtion
*/

return_statues pop_stack(stack_ds_M *mystack,uint32 *value);
 /**
  *@breief get the the last element of the stack
  *@parame pointer to stack
  *@parame value that topped
  *@retva  statues of initializtion
*/

return_statues top_stack(stack_ds_M *mystack,uint32 *value);

 /**
  *@breief get the size of stack
  *@parame pointer to stack
  *@parame size of the stack
  *@retva  statues of initializtion
*/

return_statues size_stack(stack_ds_M *mystack,uint32 *stack_size);

 /**
  *@breief print all elements  of stack
  *@parame pointer to stack
  *@retva  statues of initializtion
*/

return_statues display(stack_ds_M *mystack);








#endif // STACK_DS_H

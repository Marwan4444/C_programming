
#include "stack_dynamic.h"


static uint8 StackIsEmpty (Stack_t* stack_obj)
{
    return (stack_obj->ElementCount == 0);
}

static uint8 StackIsFull (Stack_t* stack_obj)
{
    return (stack_obj->ElementCount == stack_obj->StackMaxSize);
}


Stack_t *CreateStack (uint32 maxSize, StackStatus_t *ret_status)
{
    Stack_t *my_stack = NULL;
    if(NULL == ret_status)
    {
        *ret_status = STACK_NULL_POINTER; /* NULL pointer passed to the function */
        my_stack = NULL;
        printf(" the stack is NULL\n");
    }
    else
    {
        /* Allocate the stack in the heap */
        my_stack = (Stack_t *)malloc(sizeof(Stack_t));
        if(!my_stack)
        {
            *ret_status = STACK_NOK; /* Stack not created successfully */
            my_stack = NULL;
            printf(" the stack is NULL\n");
        }
        else
        {
            my_stack->StackTop = -1;          /* Initialize the stack pointer to -1 (empty stack) */
            my_stack->ElementCount = 0;       /* Initialize the element counter to 0 (empty stack) */
            my_stack->StackMaxSize = maxSize; /* Initialize the maximum number of elements in the stack */
            my_stack->StackArray = (void **)calloc(my_stack->StackMaxSize, sizeof(void *));
            if(!my_stack->StackArray)
            {
                free(my_stack);  /* Free the stack object as the Array not created successfully */
                my_stack = NULL; /* Array not created successfully */
                *ret_status = STACK_NOK;
                printf(" the arry stack is NULL\n");
            }
            else
            {
                *ret_status = STACK_OK;
                printf(" the stack created successfelly\n");
            }
        }
    }
    return my_stack;
}

Stack_t *DestroyStack (Stack_t *stack_obj, StackStatus_t *ret_status)
{
    if((NULL == ret_status) || (NULL == stack_obj))
    {
        *ret_status = STACK_NULL_POINTER; /* NULL pointer passed to the function */
        printf("the stack is  NULL\n");
    }
    else
    {
        free(stack_obj->StackArray); /* Release the Array object */
        free(stack_obj); /* Release the stack object */
        *ret_status = STACK_OK;
        printf("the stack is  destroied\n");

    }
    return NULL;
}

StackStatus_t PushStack (Stack_t *stack_obj, void *itemPtr)
{
    StackStatus_t StackStatus = STACK_NOK;
    if((NULL == stack_obj) || (NULL == itemPtr))
    {
        StackStatus = STACK_NULL_POINTER; /* NULL pointer passed to the function */
        printf("the stack is  NULL\n");
    }
    else
    {
        if(StackIsFull(stack_obj))
        {
            StackStatus = STACK_FULL; /* Stack is full, prevent stack overflow */
            printf("the stack is  full\n");
        }
        else
        {
            (stack_obj->StackTop)++; /* Points to the next element in the stack */
            stack_obj->StackArray[stack_obj->StackTop] = itemPtr;
            (stack_obj->ElementCount)++; /* Increment the number of elements in the stack */
            StackStatus = STACK_OK;
            printf("the value (%i) is pushed\n",*((uint32*)itemPtr));
        }
    }
    return StackStatus;
}

void *PopStack (Stack_t *stack_obj, StackStatus_t *ret_status)
{
    void *dataPtrOut = NULL;
    if((NULL == stack_obj) || (NULL == ret_status))
    {
        *ret_status = STACK_NULL_POINTER; /* NULL pointer passed to the function */
        dataPtrOut = NULL;
        printf("the stack is  NULL\n");
    }
    else
    {
        if(StackIsEmpty(stack_obj))
        {
            *ret_status = STACK_EMPTY; /* Stack is empty, prevent stack underflow */
            dataPtrOut = NULL;
            printf("the stack is  empty\n");
        }
        else
        {
            dataPtrOut = stack_obj->StackArray[stack_obj->StackTop];
            (stack_obj->StackTop)--; /* Points to the next element in the stack */
            (stack_obj->ElementCount)--; /* Decrement the number of elements in the stack */
            *ret_status = STACK_OK;
            printf("the value (%i) is popped\n",*((uint32*)dataPtrOut));
        }
    }
    return dataPtrOut;
}

void *StackTop (Stack_t *stack_obj, StackStatus_t *ret_status)
{
    void *dataPtrOut = NULL;
    if((NULL == stack_obj) || (NULL == ret_status))
    {
        *ret_status = STACK_NULL_POINTER; /* NULL pointer passed to the function */
        dataPtrOut = NULL;
        printf("the stack is  NULL\n");
    }
    else
    {
        if(StackIsEmpty(stack_obj))
        {
            *ret_status = STACK_EMPTY; /* Stack is empty, prevent stack underflow */
            dataPtrOut = NULL;
            printf("the stack is  empty\n");
        }
        else
        {
            /* Copy the top element to the user */
            dataPtrOut = stack_obj->StackArray[stack_obj->StackTop];
            *ret_status = STACK_OK;
            printf("the value (%i) is topped\n",*((uint32*)stack_obj->StackArray[stack_obj->StackTop]));
        }
    }
    return dataPtrOut;
}

StackStatus_t StackCount (Stack_t* stack_obj, uint32 *stack_count)
{
    StackStatus_t StackStatus = STACK_NOK;
    if((NULL == stack_obj) || (NULL == stack_count))
    {
        StackStatus = STACK_NULL_POINTER; /* NULL pointer passed to the function */
        printf("the stack is  NULL\n");
    }
    else
    {
        *stack_count = stack_obj->ElementCount;
        StackStatus = STACK_OK;
        printf("the conte of elements is %i\n",*stack_count);
    }
    return StackStatus;
}



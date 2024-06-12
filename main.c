
#include"stack_ds.h"

stack_ds_M stack1;

uint32 *pop_value = ZERO_INTI;
uint32 *top_value = ZERO_INTI;
uint32 *size = ZERO_INTI;


int main()
{
    return_statues ret =R_NOK;
    ret= init_stack(&stack1);

    printf("==========PUSH IN THE STACK=========\n");
    ret= push_stack(&stack1,11);
    ret= push_stack(&stack1,22);
    ret= push_stack(&stack1,33);
    ret= push_stack(&stack1,44);
    ret= push_stack(&stack1,55);
    ret= push_stack(&stack1,66);
    ret= size_stack(&stack1,&size);
    printf("==========POP FROM THE STACK=========\n");
    ret= pop_stack(&stack1,&pop_value);
    ret= pop_stack(&stack1,&pop_value);
    ret= pop_stack(&stack1,&pop_value);
    ret= pop_stack(&stack1,&pop_value);
    ret= pop_stack(&stack1,&pop_value);
    ret= pop_stack(&stack1,&pop_value);
    ret= pop_stack(&stack1,&pop_value);
    printf("==========TOP ELEMENT IN THE STACK=========\n");
    ret= push_stack(&stack1,11);
    ret= top_stack(&stack1,&top_value);
    ret= push_stack(&stack1,22);
    ret= top_stack(&stack1,&top_value);
    ret= push_stack(&stack1,33);
    ret= top_stack(&stack1,&top_value);
    ret= push_stack(&stack1,44);
    ret= top_stack(&stack1,&top_value);
    ret= push_stack(&stack1,55);
    ret= top_stack(&stack1,&top_value);
    ret= size_stack(&stack1,&size);
    printf("==========DISPLAY THE  STACK=========\n");
    ret= display(&stack1);





    return 0;
}

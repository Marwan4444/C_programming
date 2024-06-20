
#include"stack_dynamic.h"


Stack_t *stack1 = NULL;
StackStatus_t ret;
uint32 values[]={11,22,33,44,55};
void *value=11;
uint32 count_element;


int main()
{
stack1=CreateStack(5,&ret);
PushStack(stack1,values);
PushStack(stack1,values+1);
PushStack(stack1,values+2);
PushStack(stack1,values+3);
PushStack(stack1,values+4);
PushStack(stack1,values+5);
StackTop(stack1,&ret);
StackCount(stack1,&count_element);
PopStack (stack1,&ret);
PopStack (stack1,&ret);
PopStack (stack1,&ret);
StackTop(stack1,&ret);
StackCount(stack1,&count_element);
PopStack (stack1,&ret);
PopStack (stack1,&ret);
PopStack (stack1,&ret);
PopStack (stack1,&ret);
PopStack (stack1,&ret);




    return 0;
}

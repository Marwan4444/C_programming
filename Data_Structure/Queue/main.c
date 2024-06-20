

#include"queue.h"

queue_m *queue1;
QueueStatus_m return_statues_queue;
uint32 numbers[]={11,22,33,44,55,66};
void *ret_val=NULL;
sint32 count_queue=0;

int main()
{
    uint32 counter=0;
   queue1 =creat_queue(5,&return_statues_queue);

    for(counter;counter<5;counter++)
    {
        return_statues_queue = Enqueue(queue1,numbers+counter);
    }
     ret_val =Dequeueu(queue1,&return_statues_queue);

    ret_val=front_queue(queue1,&return_statues_queue);
    ret_val=rear_queue(queue1,&return_statues_queue);
    return_statues_queue =get_count_queue(queue1,&count_queue);


    for(counter;counter>0;counter--)
    {
        ret_val =Dequeueu(queue1,&return_statues_queue);

    }
    return_statues_queue =destroy_queue(queue1);

    return 0;
}


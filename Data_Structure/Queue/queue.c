

#include"queue.h"

/**
  *@breief create the queue
  *@parame max size of queue
  *@parame statues of initializtion
  *@retva  pointer to queue
*/

queue_m *creat_queue(uint32 max_size_queue ,QueueStatus_m *ret_status)
{
    queue_m *myqueue;
    /* creat the over all Queue */
    myqueue=(queue_m*)malloc(sizeof(queue_m));
    if(NULL==myqueue)
    {
        printf("the Queue is NULL\n");
        *ret_status=QUEUE_NULL_POINTER;
        myqueue =NULL;
    }
    else
    {
        /* creat the Array Queue */
        myqueue->queue_array=(void**)calloc(max_size_queue, sizeof(void*));
        if(myqueue->queue_array == NULL)
        {
            printf("the array in Queue is NULL\n");
            *ret_status=QUEUE_NULL_POINTER;
            myqueue=NULL;

        }
        else
        {
           myqueue->element_count= 0;
           myqueue->front_queue  =-1;
           myqueue->rear_queue   =-1;
           myqueue->max_size =max_size_queue;

           printf("the Queue is created and its address is =0X%X \n",myqueue);
           *ret_status=QUEUE_OK;
        }

    }
    return myqueue;

}

/**
  *@breief remove the queue
  *@parame pointer to queue
  *@retva statues of initializtion
*/

QueueStatus_m destroy_queue(queue_m *myqueue)
{
    QueueStatus_m ret =QUEUE_NOK;
    if(myqueue==NULL)
    {
        printf("the Queue is NULL\n");
        ret=QUEUE_NULL_POINTER;

    }
    else
    {
        free(myqueue->queue_array);
        free(myqueue);
        ret =QUEUE_OK;
        printf("the Queue is destroied \n");

    }

return ret;
}

/**
  *@breief increase the rear and add the value in the queue
  *@parame pointer to queue
  *@parame value that enqueue
  *@retva  statues of initializtion
*/

QueueStatus_m Enqueue(queue_m *myqueue,void *element_enqueue)
{
    QueueStatus_m ret = R_NOK;
    if(myqueue==NULL || element_enqueue==NULL)
    {
         printf("the Queue is NULL\n");
         ret=QUEUE_NULL_POINTER;
    }
    else
    {

        if(myqueue->element_count == myqueue->max_size)
        {
            printf(" the Queue is FULL\n");
            ret=QUEUE_FULL;

        }
        else
        {
            (myqueue->rear_queue)++;

            /* make Queue circular */
            if(myqueue->rear_queue == myqueue->max_size)
            {
                (myqueue->rear_queue)=0;

            }
            else
            {   /* Nothing */  }

            /* add the element in Queue */
            myqueue->queue_array[myqueue->rear_queue]= element_enqueue;

            /* if the element is the first element  */
            if(myqueue->element_count==0)
            {
                myqueue->front_queue   =0;
                myqueue->element_count =1;
            }
            else
            {
                (myqueue->element_count)++;
            }
            printf("Enqueue is successed \n");
            ret=QUEUE_OK;


        }


    }

return ret;
}

/**
  *@breief get the value and increase front
  *@parame pointer to queue
  *@parame statues of initializtion
  *@retva  pointer to the value getted
*/

void *Dequeueu(queue_m *myqueue,QueueStatus_m *ret_status)
{
    void *return_element=NULL;
    if(myqueue==NULL || NULL==ret_status)
    {
    printf("the Queue is NULL\n");
    ret_status=QUEUE_NULL_POINTER;

    }
    else
    {

        if(!myqueue->element_count)
        {
            printf("the Queue is EMPTY\n");
            ret_status =QUEUE_EMPTY;

        }
        else
        {
        /* get the element */
        return_element =myqueue->queue_array[myqueue->front_queue];
        (myqueue->front_queue)++;

        /* make Queue circular */
        if(myqueue->front_queue == myqueue->max_size)
        {
            myqueue->front_queue=0;
        }
        else
        {   /* Nothing */  }

        /* if the element is the last element */
        if(myqueue->element_count ==1)
        {
            myqueue->front_queue =-1;
            myqueue->rear_queue  =-1;
        }
        else
        {   /* Nothing */  }

        /* remove the element from the Queue */
        (myqueue->element_count)--;
        ret_status=QUEUE_OK;

        }
        if(return_element)
        {
          printf("Dequeue is successed - the value =0X%i\n",*((uint32*)return_element));
        }




    }
 return return_element;
}

/**
  *@breief get the  first element of the queue (front)
  *@parame pointer to queue
  *@parame statues of initializtion
  *@retva  pointer to the value getted
*/

void *front_queue(queue_m *myqueue,QueueStatus_m *ret_status)
{
    void *return_element=NULL;
    if(myqueue==NULL || NULL==ret_status)
    {
    printf("the Queue is NULL\n");
    ret_status=QUEUE_NULL_POINTER;

    }
    else
    {

        if(!myqueue->element_count)
        {
            printf("the Queue is EMPTY\n");
            ret_status =QUEUE_EMPTY;

        }
        else
        {
            /* get the front element */
             return_element =myqueue->queue_array[myqueue->front_queue];
             ret_status=QUEUE_OK;
        }
        if(return_element)
        {
          printf("the front value =0X%i\n",*((uint32*)return_element));
        }


    }
return return_element;
}

/**
  *@breief get the  last element of the queue (rear)
  *@parame pointer to queue
  *@parame statues of initializtion
  *@retva  pointer to the value getted
*/

void *rear_queue(queue_m *myqueue,QueueStatus_m *ret_status)
{
    void *return_element=NULL;
    if(myqueue==NULL || NULL==ret_status)
    {
    printf("the Queue is NULL\n");
    ret_status=QUEUE_NULL_POINTER;

    }
    else
    {
        if(!myqueue->element_count)
        {
            printf("the Queue is EMPTY\n");
            ret_status =QUEUE_EMPTY;

        }
        else
        {
            /* get the front element */
             return_element =myqueue->queue_array[myqueue->rear_queue];
             ret_status=QUEUE_OK;
        }
        if(return_element)
        {
          printf("the rear value =0X%i\n",*((uint32*)return_element));
        }



    }
return return_element;
}

/**
  *@breief get the number of the element in queue
  *@parame pointer to queue
  *@parame ponyer to number  of the element
  *@retva  statues of initializtion
*/

QueueStatus_m get_count_queue(queue_m *myqueue,sint32 *count_queue)
{
    QueueStatus_m ret=R_NOK;
    if(myqueue==NULL || NULL==count_queue)
    {
    printf("the Queue is NULL\n");
    ret=QUEUE_NULL_POINTER;
    }
    else
    {
        if(!myqueue->element_count)
        {
            printf("the Queue is EMPTY\n");
            ret =QUEUE_EMPTY;
        }
        else
        {
            *count_queue= myqueue->element_count;
            ret= QUEUE_OK;
            printf("the count of element : %i\n",*count_queue);

        }

    }
return ret;
}






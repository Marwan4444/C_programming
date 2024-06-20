#ifndef QUEUE_H
#define QUEUE_H


#include <stdio.h>
#include <stdlib.h>

#include"sdt_type.h"

typedef struct
{
    void ** queue_array;
    uint32 max_size;
    sint32 front_queue;
    sint32 rear_queue;
    sint32 element_count;
}queue_m;


typedef enum{
    QUEUE_NOK = 0,
    QUEUE_OK,
    QUEUE_FULL,
    QUEUE_EMPTY,
    QUEUE_NULL_POINTER
}QueueStatus_m;

/**
  *@breief create the queue
  *@parame max size of queue
  *@parame statues of initializtion
  *@retva  pointer to queue
*/

queue_m *creat_queue(uint32 max_size_queue ,QueueStatus_m *ret_status);

/**
  *@breief remove the queue
  *@parame pointer to queue
  *@retva statues of initializtion
*/

QueueStatus_m destroy_queue(queue_m *myqueue);

/**
  *@breief increase the rear and add the value in the queue
  *@parame pointer to queue
  *@parame value that enqueue
  *@retva  statues of initializtion
*/

QueueStatus_m Enqueue(queue_m *myqueue,void *element_enqueue);

/**
  *@breief get the value and increase front
  *@parame pointer to queue
  *@parame statues of initializtion
  *@retva  pointer to the value getted
*/

void *Dequeueu(queue_m *myqueue,QueueStatus_m *ret_status);

/**
  *@breief get the  first element of the queue (front)
  *@parame pointer to queue
  *@parame statues of initializtion
  *@retva  pointer to the value getted
*/

void *front_queue(queue_m *myqueue,QueueStatus_m *ret_status);

/**
  *@breief get the  last element of the queue (rear)
  *@parame pointer to queue
  *@parame statues of initializtion
  *@retva  pointer to the value getted
*/

void *rear_queue(queue_m *myqueue,QueueStatus_m *ret_status);

/**
  *@breief get the number of the element in queue
  *@parame pointer to queue
  *@parame ponyer to number  of the element
  *@retva  statues of initializtion
*/

QueueStatus_m get_count_queue(queue_m *myqueue,sint32 *count_queue);




#endif // QUEUE_H

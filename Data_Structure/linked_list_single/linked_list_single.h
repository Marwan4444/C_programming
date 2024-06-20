#ifndef LINKED_LIST_SINGLE
#define LINKED_LIST_SINGLE


#include <stdio.h>
#include <stdlib.h>

#include"std_type.h"

 typedef struct Node{
    uint32 NodeData;
    struct Node *NodeLink;
}Node;



/**
  *@breief add element at beginning of single linkedlist
  *@parame pointer to pointer ( address node)
  *@retva  nothing
*/

void Insert_Node_At_Beginning(Node**List);

/**
  *@breief add element at end of single linkedlist
  *@parame pointer to pointer ( address node)
  *@retva  nothing
*/

void Insert_Node_At_End( Node **List);

/**
  *@breief add element after node of single linkedlist
  *@parame pointer to node
  *@retva  nothing
*/

void Insert_Node_After( Node *List);

/**
  *@breief delete element at beginning of single linkedlist
  *@parame pointer to pointer ( address node)
  *@retva  nothing
*/

void Delete_Node_At_Beginning( Node **List);

/**
  *@breief delete element at any position in single linkedlist
  *@parame pointer to node
  *@retva  nothing
*/

void Delete_Node( Node *List);

/**
  *@breief print  all the element in single linkedlist
  *@parame pointer to node
  *@retva  nothing
*/

void Display_All_Nodes( Node *List);

/**
  *@breief get length of the single linked list
  *@parame pointer to node
  *@retva  length of the single linkedlist
*/

uint32 Get_Length( Node *List);







#endif // LINKED_LIST_SINGLE

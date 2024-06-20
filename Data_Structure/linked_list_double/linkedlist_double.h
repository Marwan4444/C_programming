#ifndef LINKED_LIST_DOUBLE
#define LINKED_LIST_DOUBLE

#include <stdio.h>
#include <stdlib.h>

#include"std_type.h"

typedef struct Node {
    uint32 NodeData;
    struct Node *LeftNodeLink;
    struct Node *RightNodeLink;
}Node;


/**
  *@breief add element at beginning of double linkedlist
  *@parame pointer to pointer ( address node)
  *@retva  nothing
*/

void Insert_Node_At_Beginning( Node **List);

/**
  *@breief add element at end of double linkedlist
  *@parame pointer to Node
  *@retva  nothing
*/

void Insert_Node_At_End( Node *List);

/**
  *@breief add element after node of double linkedlist
  *@parame pointer to node
  *@retva  nothing
*/

void Insert_Node_After( Node *List);

/**
  *@breief add element before node of double linkedlist
  *@parame pointer to pointer ( address node )
  *@retva  nothing
*/

void Insert_Node_Before( Node **List);

/**
  *@breief delete the element at the end of double linkedlist
  *@parame pointer to pointer ( address node)
  *@retva  nothing
*/

void Delete_Node_At_Beginning( Node **List);

/**
  *@breief delete the element at the end of double linkedlist
  *@parame pointer to node
  *@retva  nothing
*/

void Delete_Node_At_End( Node *List);

/**
  *@breief delete the element Intermediate of double linkedlist
  *@parame pointer to node
  *@retva  nothing
*/

void Delete_Node_At_Intermediate( Node *List);

/**
  *@breief print all  the elements of double linkedlist forward
  *@parame pointer to node
  *@retva  nothing
*/

void Display_All_Nodes_Forward( Node *List);

/**
  *@breief print all  the elements of double linkedlist reverse
  *@parame pointer to node
  *@retva  nothing
*/

void Display_All_Nodes_Reverse( Node *List);


#endif // LINKED_LIST_DOUBLE

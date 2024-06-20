
#include"linked_list_single.h"


/**
  *@breief add element at beginning of single linkedlist
  *@parame pointer to pointer ( address node)
  *@retva  nothing
*/

void Insert_Node_At_Beginning( Node **List){
     Node *TempNode = NULL;

    TempNode = ( Node *)malloc(sizeof( Node));
    if(NULL != TempNode){
        printf("Enter Node Data : ");
        scanf("%i", &TempNode->NodeData);

        /* Check if linked list is empty */
        if(NULL == *List){ /* Linked list is empty */
            TempNode->NodeLink = NULL;
            *List = TempNode;
        }
        else{ /* Linked list is not empty */
            TempNode->NodeLink = *List;
            *List = TempNode;
        }
    }
    else{
        /* Nothing */
    }
}

/**
  *@breief add element at end of single linkedlist
  *@parame pointer to pointer ( address node)
  *@retva  nothing
*/


void Insert_Node_At_End( Node **List){
     Node *TempNode = NULL;
     Node *LastNode = NULL;

    TempNode = ( Node *)malloc(sizeof( Node));
    if(NULL != TempNode){
        printf("Enter Node Data : ");
        scanf("%i", &TempNode->NodeData);
        TempNode->NodeLink = NULL;

        /* Check if linked list is empty */
        if(NULL == *List){ /* Linked list is empty */
            *List = TempNode;
        }
        else{ /* Linked list is not empty */
            LastNode = *List;
            while(LastNode->NodeLink != NULL){
                LastNode = LastNode->NodeLink;
            }
            LastNode->NodeLink = TempNode;
        }
    }
    else{
        /* Nothing */
    }
}

/**
  *@breief add element after node of single linkedlist
  *@parame pointer to node
  *@retva  nothing
*/

void Insert_Node_After( Node *List){
     Node *TempNode = NULL;
     Node *NodeListCounter = NULL;
    uint32 NodePosition = 0;    /*  */
    uint32 ListLength = 0;      /*  */
    uint32 NodeCounter = 1;     /* Points to the first node */

    printf("Enter Node Position (First node is position = 1): ");
    scanf("%i", &NodePosition);

    ListLength = Get_Length(List);
    if(NodePosition > ListLength){
        printf("Invalid Node Position -> List has ( %i ) Nodes \n", ListLength);
    }
    else{
        NodeListCounter = List;
        while(NodeCounter < NodePosition){
            NodeCounter++;
            NodeListCounter = NodeListCounter->NodeLink;
        } /* TempNode points to the node where we have to insert after it */
        TempNode = ( Node *)malloc(sizeof(Node));
        if(NULL != TempNode){
            printf("Enter Node Data : ");
            scanf("%i", &TempNode->NodeData);
            /* Connect the right side connection */
            TempNode->NodeLink = NodeListCounter->NodeLink;
            /* Connect the Left side connection */
            NodeListCounter->NodeLink = TempNode;
        }
        else{
            /* Nothing */
        }
    }
}

/**
  *@breief delete element at beginning of single linkedlist
  *@parame pointer to pointer ( address node)
  *@retva  nothing
*/

void Delete_Node_At_Beginning( Node **List){
     Node *TempNode = *List;
    uint32 ListLength = 0;      /*  */

    ListLength = Get_Length(*List);
    if(ListLength == 0){
        printf("List is Empty , nothing to be deleted !! \n");
    }
    else{
        *List = TempNode->NodeLink;
        TempNode->NodeLink = NULL; /* TempNode is a free node */
        free(TempNode);
    }
}

/**
  *@breief delete element at any position in single linkedlist
  *@parame pointer to node
  *@retva  nothing
*/

void Delete_Node( Node *List){
     Node *NodeListCounter = List;
     Node *NextNode = List;
    uint32 NodePosition = 0;    /*  */
    uint32 ListLength = 0;      /*  */
    uint32 NodeCounter = 1;     /* Points to the first node */

    printf("Enter Node Position (First node is position = 1): ");
    scanf("%i", &NodePosition);
    ListLength = Get_Length(List);
    if((NodePosition > ListLength) || (ListLength == 1)){
        printf("Please use Delete_Node_At_Beginning !! \n");
    }
    else{
        while(NodeCounter < (NodePosition - 1)){
            NodeCounter++;
            NodeListCounter = NodeListCounter->NodeLink;
        }
        NextNode = NodeListCounter->NodeLink;
        NodeListCounter->NodeLink = NextNode->NodeLink;
        free(NextNode);
    }
}

/**
  *@breief print  all the element in single linkedlist
  *@parame pointer to node
  *@retva  nothing
*/

void Display_All_Nodes( Node *List){
     Node *TempNode = List;

    printf("Node Values : ");
    if(NULL == TempNode){
        printf("List is empty !! \n");
    }
    else{
        while(TempNode != NULL){
            printf("%i -> ", TempNode->NodeData);
            TempNode = TempNode->NodeLink;
        }
        if(NULL == TempNode){
            printf("NULL \n");
        }
    }
}

/**
  *@breief get length of the single linked list
  *@parame pointer to node
  *@retva  length of the single linkedlist
*/


uint32 Get_Length( Node *List){
     Node *TempNode = List;
    uint32 NodeCount = 0;

    while(TempNode != NULL){
        NodeCount++;
        TempNode = TempNode->NodeLink;
    }

    return NodeCount;
}

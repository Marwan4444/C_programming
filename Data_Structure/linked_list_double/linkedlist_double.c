

#include"linkedlist_double.h"


/**
  *@breief add element at beginning of double linkedlist
  *@parame pointer to pointer ( address node)
  *@retva  nothing
*/

void Insert_Node_At_Beginning( Node **List){
     Node *TempNode = NULL; /* Points to the new node */

    TempNode = ( Node *)malloc(sizeof( Node));
    if(NULL != TempNode){
       printf("Enter Node Data : ");
        scanf("%i", &TempNode->NodeData);

        /* Check if the list is empty */
        if(NULL == *List){
            TempNode->LeftNodeLink = NULL;  /* This is the only node */
            TempNode->RightNodeLink = NULL; /* This is the only node */
            (*List) = TempNode;   /* Make the Head pointer points to this only node */
        }
        else{
            TempNode->RightNodeLink = (*List); /* Make the new node to be the head */
            TempNode->LeftNodeLink = NULL;     /* The LeftNodeLink always NULL in the Head node */
            (*List)->LeftNodeLink = TempNode;  /* This now became the second node */
            (*List) = TempNode; /* Make the Head pointer points to the new node */
        }
    }
    else{
        printf("Can't allocate the new node !! \n");
    }
}

/**
  *@breief add element at end of double linkedlist
  *@parame pointer to Node
  *@retva  nothing
*/


void Insert_Node_At_End( Node *List){
     Node *TempNode = NULL; /* Points to the new node */
     Node *NodeListCounterOne = NULL;  /* Traverse to the needed node */
    TempNode = ( Node*)malloc(sizeof( Node));
    if(NULL != TempNode){
        printf("Enter Node Data : ");
        scanf("%i", &TempNode->NodeData);

        TempNode->RightNodeLink = NULL;
        NodeListCounterOne = List;
        while(NULL != NodeListCounterOne->RightNodeLink){
            NodeListCounterOne = NodeListCounterOne->RightNodeLink;
        }
        TempNode->LeftNodeLink = NodeListCounterOne;
        NodeListCounterOne->RightNodeLink = TempNode;
    }
    else{
        printf("Can't allocate the new node !! \n");
    }
}

/**
  *@breief add element after node of double linkedlist
  *@parame pointer to node
  *@retva  nothing
*/

void Insert_Node_After( Node *List ){
     Node *TempNode = NULL;            /* Points to the new node */
     Node *NodeListCounterOne = NULL;  /* Traverse to the needed node */
     Node *NodeListCounterTwo = NULL;  /* Traverse to the needed node */
     uint32 position=0;

    printf("Enter Node Position (First node is position = 1): ");
    scanf("%i", &position);

    NodeListCounterOne = List; /* Points to the head node now */
    while(position != 1){
        NodeListCounterOne = NodeListCounterOne->RightNodeLink; /* Move the pointer */
        position--;
    }

    /* Create the new node */
    TempNode = ( Node*)malloc(sizeof( Node));
    if(NULL != TempNode){
        printf("Enter Node Data : ");
        scanf("%i", &TempNode->NodeData);

        /* Check if we reach the End Node of the List :: Adding the new node at the end */
        if(NULL == NodeListCounterOne->RightNodeLink){
            NodeListCounterOne->RightNodeLink = TempNode;
            TempNode->LeftNodeLink = NodeListCounterOne;
            TempNode->RightNodeLink = NULL;
        }
        else{
            NodeListCounterTwo = NodeListCounterOne->RightNodeLink;
            /* Update the information of the new node */
            NodeListCounterOne->RightNodeLink = TempNode; /* Make the left node points to the new node */
            NodeListCounterTwo->LeftNodeLink = TempNode;  /* Make the right node points to the new node */
            TempNode->LeftNodeLink = NodeListCounterOne;  /* Update the left pointer of the new node */
            TempNode->RightNodeLink = NodeListCounterTwo; /* Update the right pointer of the new node */
        }
    }
    else{
        printf("Can't allocate the new node !! \n");
    }
}

/**
  *@breief add element before node of double linkedlist
  *@parame pointer to pointer ( address node )
  *@retva  nothing
*/

void Insert_Node_Before( Node **List ){
     Node *TempNode = NULL;            /* Points to the new node */
     Node *NodeListCounterOne = NULL;  /* Traverse to the needed node */
     Node *NodeListCounterTwo = NULL;  /* Traverse to the needed node */
     uint32 position=0;
     uint32 NodePosition = position;

    printf("Enter Node Position (First node is position = 1): ");
    scanf("%i", &position);

    NodeListCounterOne = (*List); /* Points to the head node now */
    while(NodePosition > position-1){ /* This to point to the node before the given position */
        NodeListCounterOne = NodeListCounterOne->RightNodeLink;
        NodePosition--;
    }

    /* Create the new node */
    TempNode = ( Node*)malloc(sizeof( Node));
    if(NULL != TempNode){
        printf("Enter Node Data : ");
        scanf("%i", &TempNode->NodeData);
        /* Check if the position = 1 :: Adding the new node at the beginning */
        if(1 == position){
            TempNode->LeftNodeLink = NULL;  /* This is the only node */
            TempNode->RightNodeLink = *List;
            (*List)->LeftNodeLink = TempNode;
            *List = TempNode;
        }
        else{
            NodeListCounterTwo = NodeListCounterOne->RightNodeLink;
            NodeListCounterOne->RightNodeLink = TempNode;
            NodeListCounterTwo->LeftNodeLink = TempNode;
            TempNode->RightNodeLink = NodeListCounterTwo;
            TempNode->LeftNodeLink = NodeListCounterOne;
        }
    }
    else{
        printf("Can't allocate the new node !! \n");
    }
}

/**
  *@breief delete the element at the end of double linkedlist
  *@parame pointer to node
  *@retva  nothing
*/


void Delete_Node_At_Beginning( Node **List){
     Node *TempNode = *List; /* Points to the node that we need to delete */

#ifdef DELETE_NODE_AT_BEGINNING
    /* Update the head node */
    *List = (*List)->RightNodeLink;
    (*List)->LeftNodeLink = NULL;
    /* Free the first node */
    free(TempNode);
    TempNode = NULL;
#else
    *List = (*List)->RightNodeLink;
    free((*List)->LeftNodeLink);
    (*List)->LeftNodeLink = NULL;
#endif
}

/**
  *@breief delete the element at the end of double linkedlist
  *@parame pointer to node
  *@retva  nothing
*/

void Delete_Node_At_End( Node *List){
    Node *NodeListCounterOne = NULL;
    Node *NodeListCounterTwo = NULL;

    NodeListCounterOne = List;
    while(NodeListCounterOne->RightNodeLink != NULL){
        NodeListCounterOne = NodeListCounterOne->RightNodeLink;
    }
    NodeListCounterTwo = NodeListCounterOne->LeftNodeLink;
    NodeListCounterTwo->RightNodeLink = NULL;
    free(NodeListCounterOne);
    NodeListCounterOne = NULL;
}

/**
  *@breief delete the element Intermediate of double linkedlist
  *@parame pointer to node
  *@retva  nothing
*/

void Delete_Node_At_Intermediate( Node *List ){
     Node *NodeListCounterOne = NULL;
     Node *NodeListCounterTwo = NULL;
     uint32 position =0;
     uint32 NodePosition = position;
    printf("Enter Node Position (First node is position = 1): ");
    scanf("%i", &NodePosition);

    if(1 == NodePosition){
        printf("Please use the Delete_Node_At_Beginning !! \n");
    }
    else{
        NodeListCounterOne = List;
        while(NodePosition > 1){
            NodeListCounterOne = NodeListCounterOne->RightNodeLink;
            NodePosition--;
        }

        NodeListCounterTwo = NodeListCounterOne->LeftNodeLink;
        NodeListCounterTwo->RightNodeLink = NodeListCounterOne->RightNodeLink;
        NodeListCounterOne->RightNodeLink->LeftNodeLink = NodeListCounterTwo;
        free(NodeListCounterOne);
        NodeListCounterOne = NULL;
    }
}

/**
  *@breief print all  the elements of double linkedlist forward
  *@parame pointer to node
  *@retva  nothing
*/

void Display_All_Nodes_Forward( Node *List){
     Node *TempNode = List;

    printf("\nTraversal in forward direction ==> ");
    printf("Data : ");
    printf("%d -> ", TempNode->NodeData);
    while(TempNode->RightNodeLink != NULL){
        TempNode = TempNode->RightNodeLink;
        printf("%d -> ", TempNode->NodeData);
    }
    if(NULL == TempNode->RightNodeLink){
        printf("NULL");
    }
    printf("\n");
}

/**
  *@breief print all  the elements of double linkedlist reverse
  *@parame pointer to node
  *@retva  nothing
*/


void Display_All_Nodes_Reverse( Node *List){
     Node *TempNode = List;

    printf("\nTraversal in reverse direction ==> ");
    printf("Data : ");
    while(TempNode->RightNodeLink != NULL){
        TempNode = TempNode->RightNodeLink;
    }
    while(TempNode != NULL){
        printf("%d -> ", TempNode->NodeData);
        TempNode = TempNode->LeftNodeLink;
    }
    if(NULL == TempNode){
        printf("NULL");
    }
    printf("\n");
}

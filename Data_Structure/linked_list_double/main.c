#include"linkedlist_double.h"


 Node *ListHead = NULL;


int main()
{


    uint8 UserChoice = 0;
    uint32 ListLength = 0;

    printf("-> Hello to Double Linked List \n");
    while(1){
        printf("\n");
        printf("===============================\n");
        printf("-> 1) Insert_Node_At_Beginning \n");
        printf("-> 2) Insert_Node_At_End \n");
        printf("-> 3) Insert_Node_After \n");
        printf("-> 4) Insert_Node_Befor \n");
        printf("-> 5) Delete_Node_At_Beginning \n");
        printf("-> 6) Delete_Node_At_end \n");
        printf("-> 7) Delete_Node_At_Intermediate \n");
        printf("-> 8) Display_All_Nodes_Forward \n");
        printf("-> 9) Display_All_Nodes_Reverse \n");
        printf("-> 10) Quit from application \n");
        printf("===============================\n");

        printf("\n");
        printf("UserChoice : ");
        scanf("%i", &UserChoice);

        switch(UserChoice){
            case 1:
                Insert_Node_At_Beginning(&ListHead);
            break;
            case 2:
                Insert_Node_At_End(ListHead);
            break;
            case 3:
                Insert_Node_After(ListHead);
            break;
            case 4:
                Insert_Node_Before(&ListHead);
            break;
            case 5:
                Delete_Node_At_Beginning(&ListHead);
            break;
            case 6:
                Delete_Node_At_Intermediate(ListHead);
            break;
            case 7:
                Delete_Node_At_End(ListHead);
            break;
            case 8:
               Display_All_Nodes_Forward(ListHead);
            break;
            case 9:
               Display_All_Nodes_Reverse(ListHead);
            break;
            case 10:
                printf("Quit from application \n");
                exit(0);
            break;
            default:
                printf("User Choice out of range !!\n");
            break;
        }
    }
    return 0;
}

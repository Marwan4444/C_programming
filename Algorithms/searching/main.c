
#include"searching.h"



unsigned int My_Data[DATA_MAX_SIZE] = {11, 22, 33, 44, 55, 66, 77, 88 ,99 ,100};


int main()
{
    uint32 Ret = 0;
    sint32 Ret1 = 0;
    printf("******************linear search******************\n");
    Ret = PerformeLinearSearchAlgorithm_1(My_Data, DATA_MAX_SIZE, 77); // 6
    printf("Element is found with index = %i \n", Ret);


    Ret = PerformeLinearSearchAlgorithm_1(My_Data, DATA_MAX_SIZE, 999); // -1
    if(ELEMENT_NOT_FOUND == Ret)
    {
        printf("Element is not found in your data !!\n");
    }

    printf("============================== \n");

    Ret = PerformeLinearSearchAlgorithm_2(My_Data, DATA_MAX_SIZE, 77); // 2
    printf("Element is found with index = %i \n", Ret);


    Ret = PerformeLinearSearchAlgorithm_2(My_Data, DATA_MAX_SIZE, 999); // -1
    if(ELEMENT_NOT_FOUND == Ret)
    {
        printf("Element is not found in your data !!\n");
    }

    printf("\n\n");
    printf("******************Binary search******************\n");

    Ret1 = PerformeBinarySearchAlgorithm_1(My_Data, 0, DATA_MAX_SIZE-1, 33); // 3
    printf("Element is found with index = %i \n", Ret1);


    Ret1 = PerformeBinarySearchAlgorithm_1(My_Data, 0, DATA_MAX_SIZE-1, 100); // -1
    if(ELEMENT_NOT_FOUND == Ret1)
    {
        printf("Element is not found in your data !!\n");
    }

    printf("============================== \n");

    Ret1 = PerformeBinarySearchAlgorithm_2(My_Data, 0, DATA_MAX_SIZE-1, 44); // 6
    printf("Element is found with index = %i \n", Ret1);


    Ret1 = PerformeBinarySearchAlgorithm_2(My_Data, 0, DATA_MAX_SIZE-1, 999); // -1
    if(ELEMENT_NOT_FOUND == Ret1)
    {
        printf("Element is not found in your data !!\n");
    }


    return 0;
}



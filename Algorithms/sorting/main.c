#include"sorting.h"


unsigned int My_Data [MY_DATA_MAX_SIZE] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};
unsigned int My_Data1[MY_DATA_MAX_SIZE] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};
unsigned int My_Data2[MY_DATA_MAX_SIZE] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};


int main()
{
    printf("********************* Bubble sort*********************\n");
    Print_My_Data(My_Data, MY_DATA_MAX_SIZE);
    Execute_Bubble_Sort(My_Data, MY_DATA_MAX_SIZE);
    Print_My_Data(My_Data, MY_DATA_MAX_SIZE);
    printf("\n\n");


    printf("********************* Insertion sort*********************\n");
    Print_My_Data(My_Data1, MY_DATA_MAX_SIZE);
    Execute_Insertion_Sort(My_Data1, MY_DATA_MAX_SIZE);
    Print_My_Data(My_Data1, MY_DATA_MAX_SIZE);
    printf("\n\n");

    printf("********************* Selection sort*********************\n");
    Print_My_Data(My_Data2, MY_DATA_MAX_SIZE);
    Execute_Selection_Sort(My_Data2, MY_DATA_MAX_SIZE);
    Print_My_Data(My_Data2, MY_DATA_MAX_SIZE);


    return 0;
}

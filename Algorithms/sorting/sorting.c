

#include"sorting.h"

/**
  *@breief swap two numbers
  *@parame number one
  *@parame number two
  *@retva  nothing
*/

static void Swap_Two_Numbers(unsigned int *pNumber1, unsigned int *pNumber2){
    unsigned int Temp_Number = *pNumber1;
    *pNumber1 = *pNumber2;
    *pNumber2 = Temp_Number;
}

/**
  *@breief sort the array _BUBBLE_
  *@parame array that sorted it
  *@parame length of array
  *@retva  nothing
*/

void Execute_Bubble_Sort(unsigned int my_array[], unsigned int array_length){
    unsigned int BS_Iteration = 0, Adjacent_Iteration = 0;
    unsigned char Sort_Flag = 0;

    for(BS_Iteration=0; BS_Iteration<array_length-1; BS_Iteration++){

        for(Adjacent_Iteration=0; Adjacent_Iteration < array_length-1-BS_Iteration; Adjacent_Iteration++){
            if(my_array[Adjacent_Iteration] > my_array[Adjacent_Iteration+1]){
                Swap_Two_Numbers(&my_array[Adjacent_Iteration], &my_array[Adjacent_Iteration+1]);
                Sort_Flag = 1;
            }
        }

        if(Sort_Flag == 0){
            return;
        }
    }
}

/**
  *@breief sort the array _INSERTION_
  *@parame array that sorted it
  *@parame length of array
  *@retva  nothing
*/


void Execute_Insertion_Sort(unsigned int my_array[], unsigned int array_length){
    unsigned int IS_Iteration = 0;
    unsigned int Inserted_Item = 0;
    signed int Compared_Item_Index = 0;

    for(IS_Iteration = 1; IS_Iteration < array_length; IS_Iteration++){
        Inserted_Item = my_array[IS_Iteration];
        Compared_Item_Index = IS_Iteration - 1;

        while((Inserted_Item < my_array[Compared_Item_Index])&& (Compared_Item_Index >= 0)){
            my_array[Compared_Item_Index + 1] = my_array[Compared_Item_Index];
            Compared_Item_Index--;
        }

        my_array[Compared_Item_Index + 1] = Inserted_Item;
    }
}

/**
  *@breief sort the array _SELECTION_
  *@parame array that sorted it
  *@parame length of array
  *@retva  nothing
*/


void Execute_Selection_Sort(unsigned int my_array[], unsigned int array_length){
    unsigned int SSort_Iterator = 0;
    unsigned int Minimum_Index = 0;
    unsigned int Compare_Iterator = 0;

    for(SSort_Iterator = 0; SSort_Iterator < array_length-1; SSort_Iterator++){
        Minimum_Index = SSort_Iterator;

        for(Compare_Iterator = SSort_Iterator+1; Compare_Iterator < array_length; Compare_Iterator++){
            if(my_array[Compare_Iterator] < my_array[Minimum_Index]){
                Minimum_Index = Compare_Iterator;
            }
            else{
                /* Nothing */
            }
        }

        Swap_Two_Numbers(&my_array[Minimum_Index], &my_array[SSort_Iterator]);
    }
}

/**
  *@breief print the array
  *@parame array that printed
  *@parame length of array
  *@retva  nothing
*/


void Print_My_Data(unsigned int my_array[], unsigned int array_length){
    unsigned int Data_Counter = 0;
    for(Data_Counter=0; Data_Counter<array_length; Data_Counter++){
        printf("%i\t", my_array[Data_Counter]);
    }
    printf("\n");
}

#ifndef SORTING
#define SORTING

#include <stdio.h>
#include <stdlib.h>

#define MY_DATA_MAX_SIZE  10

/**
  *@breief sort the array _BUBBLE_
  *@parame array that sorted it
  *@parame length of array
  *@retva  nothing
*/


void Execute_Bubble_Sort(unsigned int my_array[], unsigned int array_length);

/**
  *@breief sort the array _INSERTION_
  *@parame array that sorted it
  *@parame length of array
  *@retva  nothing
*/


void Execute_Insertion_Sort(unsigned int my_array[], unsigned int array_length);

/**
  *@breief sort the array _SELECTION_
  *@parame array that sorted it
  *@parame length of array
  *@retva  nothing
*/

void Execute_Selection_Sort(unsigned int my_array[], unsigned int array_length);

/**
  *@breief print the array
  *@parame array that printed
  *@parame length of array
  *@retva  nothing
*/

void Print_My_Data(unsigned int my_array[], unsigned int array_length);


#endif // SORTING

#ifndef SEARCHING
#define SEARCHING


#include <stdio.h>
#include <stdlib.h>

#include"std_type.h"

#define DATA_MAX_SIZE     10
#define ELEMENT_NOT_FOUND -1


/**
  *@breief search about element in array _LINEAR_
  *@parame array that search in
  *@parame length of array
  *@parame element that search about it
  *@retva  index of element
*/

uint32 PerformeLinearSearchAlgorithm_1(uint32 Data[], uint32 Data_Length, uint32 Req_Data);

/**
  *@breief search about element in array _LINEAR_ (by anther way)
  *@parame array that search in
  *@parame length of array
  *@parame element that search about it
  *@retva  index of element
*/

uint32 PerformeLinearSearchAlgorithm_2(uint32 Data[], uint32 Data_Length, uint32 Req_Data);

/**
  *@breief search about element in array _BINARY_
  *@parame array that search in
  *@parame start index
  *@parame end index
  *@parame element that search about it
  *@retva  index of element
*/


sint32 PerformeBinarySearchAlgorithm_1(sint32 Data[], uint32 S_Index, uint32 E_Index, sint32 Req_Value);

/**
  *@breief search about element in array _BINARY_ (by anther way)
  *@parame array that search in
  *@parame start index
  *@parame end index
  *@parame element that search about it
  *@retva  index of element
*/

sint32 PerformeBinarySearchAlgorithm_2(sint32 Data[], uint32 S_Index, uint32 E_Index, sint32 Req_Value);



#endif

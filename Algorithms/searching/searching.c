
#include"searching.h"


/**
  *@breief search about element in array _LINEAR_
  *@parame array that search in
  *@parame length of array
  *@parame element that search about it
  *@retva  index of element
*/

uint32 PerformeLinearSearchAlgorithm_1(uint32 Data[], uint32 Data_Length, uint32 Req_Data)
{
    uint32 Index = 0;

    for(Index = 0; Index < Data_Length; Index++)
    {
        if(Req_Data == Data[Index])
        {
            return Index;
        }
        else { /* Nothing */ }
    }

    return -1;
}

/**
  *@breief search about element in array _LINEAR_ (by anther way)
  *@parame array that search in
  *@parame length of array
  *@parame element that search about it
  *@retva  index of element
*/

uint32 PerformeLinearSearchAlgorithm_2(uint32 Data[], uint32 Data_Length, uint32 Req_Data)
{
    uint32 Left_Index = 0;
    uint32 Right_Index = Data_Length - 1;

    for(Left_Index = 0; Left_Index <= Right_Index;)
    {
        if(Req_Data == Data[Left_Index])
        {
            return Left_Index;
        }
        else { /* Nothing */ }

        if(Req_Data == Data[Right_Index])
        {
            return Right_Index;
        }
        else { /* Nothing */ }

        Left_Index++;
        Right_Index--;
    }

    return -1;
}


/**
  *@breief search about element in array _BINARY_
  *@parame array that search in
  *@parame start index
  *@parame end index
  *@parame element that search about it
  *@retva  index of element
*/


sint32 PerformeBinarySearchAlgorithm_1(sint32 Data[], uint32 S_Index, uint32 E_Index, sint32 Req_Value){
    uint32 M_Index = 0;

    while(S_Index <= E_Index){
        M_Index = S_Index + ((E_Index - S_Index) / 2);

        if(Req_Value == Data[M_Index]){
            return M_Index;
        }
        else if(Req_Value > Data[M_Index]){
            S_Index = M_Index + 1;
        }
        else{
            E_Index = M_Index - 1;
        }
    }

    return -1;
}

/**
  *@breief search about element in array _BINARY_ (by anther way)
  *@parame array that search in
  *@parame start index
  *@parame end index
  *@parame element that search about it
  *@retva  index of element
*/

sint32 PerformeBinarySearchAlgorithm_2(sint32 Data[], uint32 S_Index, uint32 E_Index, sint32 Req_Value){
    uint32 M_Index = 0;

    while(S_Index <= E_Index){
        M_Index = S_Index + ((E_Index - S_Index) / 2);

        if(Req_Value == Data[M_Index]){
            return M_Index;
        }
        else if(Req_Value > Data[M_Index]){
            return PerformeBinarySearchAlgorithm_2(Data, M_Index+1, E_Index, Req_Value);
        }
        else{
            return PerformeBinarySearchAlgorithm_2(Data, S_Index, M_Index-1, Req_Value);
        }
    }

    return -1;
}

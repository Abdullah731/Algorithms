/********************************************************************
*  Author  :     Abdullah M. Abdullah
*  Date    :     29 NOV, 2021
*  Version :     v1.0
*  Descrip :     Implementation of Selection Sort Algorithm
********************************************************************/
#include <stdio.h>
#include "../utils/STD_TYPES.h"

u8 Arr[5] = {7,8,1,4,3};

void SelectionSort(u8 * DataArray, u8 ArraySize)
{
    u8 Step;
    u8 MinIndex;
    u8 LoopCounter;
    u8 Temp;
    for(Step = 0; Step <= ArraySize - 2; Step++)
    {
        MinIndex = Step;
        for(LoopCounter = Step + 1; LoopCounter <= ArraySize - 1; LoopCounter++)
        {
            if(DataArray[LoopCounter] < DataArray[MinIndex])
            {
                MinIndex = LoopCounter;
            }
        }
        Temp = DataArray[MinIndex];
        DataArray[MinIndex] = DataArray[Step];
        DataArray[Step] = Temp;
    }
}
void SelectionSort_Print(u8 * DataArray, u8 Size)
{
    u8 LoopCounter = 0;
    printf("Data After Selection Sorting\n");
    while(LoopCounter < Size)
    {
        printf("%d\n", DataArray[LoopCounter]);
        LoopCounter++;
    }
}
void main(void)
{
    SelectionSort(Arr, 5);
    SelectionSort_Print(Arr, 5);
}
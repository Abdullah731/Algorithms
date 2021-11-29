/********************************************************************
*  Author  :     Abdullah M. Abdullah
*  Date    :     29 NOV, 2021
*  Version :     v1.0
*  Descrip :     Implementation of Bubble Sort Algorithm
********************************************************************/
#include <stdio.h>
#include "../utils/STD_TYPES.h"

#define     MAX_SIZE    6

u8 Arr[MAX_SIZE] = {2,7,4,1,5,3};

void BubbleSort(u8 * DataArray, u8 Size)
{
    u8 LoopCounter = 0;
    u8 NumberOfIterations = 0;
    u8 Temp;

    for(NumberOfIterations = 0; NumberOfIterations < Size-1; NumberOfIterations++)
    {
        for(LoopCounter = 0; LoopCounter < (Size - NumberOfIterations - 1); LoopCounter++)
        {
            if(DataArray[LoopCounter] > DataArray[LoopCounter + 1])
            {
                Temp = DataArray[LoopCounter];
                DataArray[LoopCounter] = DataArray[LoopCounter+1];
                DataArray[LoopCounter+1] = Temp;                
            }
        }
    }
}

void BubbleSort_Print(u8 * DataArray, u8 Size)
{
    u8 LoopCounter = 0;
    printf("Data After Bubble Sorting\n");
    while(LoopCounter < Size)
    {
        printf("%d\n", DataArray[LoopCounter]);
        LoopCounter++;
    }
}

void main(void)
{
    BubbleSort(Arr, MAX_SIZE);
    BubbleSort_Print(Arr, MAX_SIZE);
}
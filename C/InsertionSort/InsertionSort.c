/********************************************************************
*  Author  :     Abdullah M. Abdullah
*  Date    :     29 NOV, 2021
*  Version :     v1.0
*  Descrip :     Implementation of Insertion Sort Algorithm
********************************************************************/
#include <stdio.h>
#include "../utils/STD_TYPES.h"


void InsertionSort(u8 * DataArray, u8 Size)
{
    u8 LoopCounter;
    u8 SelectedValue;
    u8 HoleIndex;
    for(LoopCounter = 0; LoopCounter < Size; LoopCounter++)
    {
        SelectedValue = DataArray[LoopCounter];
        HoleIndex = LoopCounter;
        while(HoleIndex > 0 && DataArray[HoleIndex - 1] > SelectedValue)
        {
            DataArray[HoleIndex] = DataArray[HoleIndex - 1];
            HoleIndex = HoleIndex - 1;
        }
        DataArray[HoleIndex] = SelectedValue;
    }
}


void InsertionSort_Print(u8 * DataArray, u8 Size)
{
    u8 LoopCounter = 0;
    printf("Data After Bubble Sorting\n");
    while(LoopCounter < Size)
    {
        printf("%d\n", DataArray[LoopCounter]);
        LoopCounter++;
    }
}

u8 Array[]={7,2,4,1,5,3};

void main(void)
{
    InsertionSort(Array, 6);
    InsertionSort_Print(Array, 6);
}
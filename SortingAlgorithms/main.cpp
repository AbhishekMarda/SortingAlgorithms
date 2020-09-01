//
//  main.cpp
//  SortingAlgorithms
//
//  Created by Abhishek Marda on 9/1/20.
//  Copyright © 2020 Abhishek Marda. All rights reserved.
//

#include <iostream>
#include <cassert>
#include <algorithm>
#include "Sorter.h"


void copy(int* copyfrom, int* copyto, int n);

bool equals(int *a, int *b, int n);

void testCase(int i, int* &arr, int& size)
{
    switch (i)
    {
        case 1:
        {
            size=3;
            arr = new int[size];
            for (int i=0;i<size; ++i)
                arr[i] = 0;
            break;
        }
            
        case 2:
        {
            size = 0;
            arr = new int[size];
        }
        case 3:
        {
            size = 1;
            arr = new int[size];
            arr[0] = 3;
        }
            
                
    }
}

int main(int argc, const char * argv[]) {
    int* arr= nullptr;
    int ARR_SIZE;
    testCase(1, arr, ARR_SIZE);
    
    
    int brr[ARR_SIZE];
    int crr[ARR_SIZE];
    copy(arr, brr, ARR_SIZE);
    copy(arr, crr, ARR_SIZE);
    Sorter s;
    s.insertionSort(brr, ARR_SIZE);
    std::sort(crr, crr+ARR_SIZE);
    assert(equals(crr, brr, ARR_SIZE));
    
    //reset
    copy(arr, brr, ARR_SIZE);
    s.selectionSort(brr, ARR_SIZE);
    assert(equals(crr, brr, ARR_SIZE));
    
    copy(arr, brr, ARR_SIZE);
    s.bubbleSort(brr, ARR_SIZE);
    assert(equals(crr, brr, ARR_SIZE));
    
    copy(arr, brr, ARR_SIZE);
    s.mergeSort(brr, ARR_SIZE);
    assert(equals(crr, brr, ARR_SIZE));
    
    delete [] arr;
}

void copy(int* copyfrom, int* copyto, int n)
{
    for (int i = 0; i<n; i++)
    {
        copyto[i] = copyfrom[i];
    }
}

bool equals(int *a, int *b, int n)
{
    for (int i=0; i<n; ++i)
    {
        if (a[i]!=b[i])
            return false;
    }
    return true;
}

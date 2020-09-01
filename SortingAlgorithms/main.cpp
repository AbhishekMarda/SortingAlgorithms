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
//TODO: template this
//TODO: learn error handling and use it for when input out of bounds of arr

void copy(int* copyfrom, int* copyto, int n);

bool equals(int *a, int *b, int n);

int main(int argc, const char * argv[]) {
    
    int arr[] = {4,3,1,0,3,4};
    const int ARR_SIZE = 6;
    
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

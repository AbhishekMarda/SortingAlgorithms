//
//  Sorter.cpp
//  SortingAlgorithms
//
//  Created by Abhishek Marda on 9/2/20.
//  Copyright © 2020 Abhishek Marda. All rights reserved.
//

#include "Sorter.h"

void Sorter::swap(int *arr, int index1, int index2)
{
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

//MARK:- INSERTION SORT

void Sorter::insertionSort(int *arr, int n)
{
    for (int i=1; i<n; ++i)
    {
        int curr = arr[i];
        for (int j = i-1 ; j>=0; --j)
        {
            if (arr[j]>curr)
                swap(arr, j, j+1);
            else
                break;
        }
    }
}


//MARK:- SELECTION SORT

void Sorter::selectionSort(int *arr, int n)
{
    for (int i=0; i<n; ++i)
    {
        int currval = arr[i];
        int minindex=i;
        int minval=currval;
        for (int j=i+1;j<n; ++j)
        {
            if (arr[j]<minval)
            {
                minval = arr[j];
                minindex = j;
            }
        }
        swap(arr, i, minindex);
    }
}

//TODO: shell sort, quicksort

//MARK:- MERGE SORT

void Sorter::mergeSort(int arr[], int n)
{
    if (n==0 || n==1)
        return;
    mergeSort(arr, n/2);
    mergeSort(arr+n/2, n-n/2);
    merge(arr, n/2, n);
    
}

void Sorter::merge(int arr[], const int n1, const int n2)
{
    int i1 = 0, i2 = n1;
    int temp[n2];
    int i = 0;
    for (; i<n2; ++i)
    {
        if (i1>=n1 || i2>=n2)
            break;
        if (arr[i1]<arr[i2])
        {
            temp[i]=arr[i1];
            i1++;
        }
        else
        {
            temp[i]=arr[i2];
            i2++;
        }
    }
    
    if (i1<n1)
    {
        for (; i1<n1 && i<n2; ++i, ++i1)
        {
            temp[i] = arr[i1];
        }
    }
    else if (i2<n2)
    {
        for (; i2<n2 && i<n2; ++i, ++i2)
        {
            temp[i] = arr[i2];
        }
    }
    for (i=0; i<n2; ++i)
        arr[i]=temp[i];
    
}


//MARK:- BUBBLE SORT

void Sorter::bubbleSort(int *arr, int n)
{
    bool changed = false;
    
    do
    {
        changed = false;
        for (int i=0; i<n-1; ++i)
        {
            if (arr[i] > arr[i+1])
            {
                swap(arr, i, i+1);
                changed = true;
            }
        }
        
    }while(changed);
}

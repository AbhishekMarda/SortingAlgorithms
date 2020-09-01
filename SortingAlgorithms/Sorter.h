//
//  Sorter.h
//  SortingAlgorithms
//
//  Created by Abhishek Marda on 9/2/20.
//  Copyright © 2020 Abhishek Marda. All rights reserved.
//

#ifndef Sorter_h
#define Sorter_h
//TODO: template this
//TODO: learn error handling and use it for when input out of bounds of arr
class Sorter
{
public:
    void insertionSort(int arr[], int n);
    void selectionSort(int arr[], int n);
    void bubbleSort(int arr[], int n);
    void shellSort(int arr[], int n);
    void quickSort(int arr[], int n);
    void mergeSort(int arr[], int n);
    
private:
    void divide(int arr[], int start, int end, int index);
    void swap(int arr[], int index1, int index2);
    void merge(int arr[], const int n1, const int n2);
};


#endif /* Sorter_h */

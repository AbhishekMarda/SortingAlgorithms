//
//  testcases.cpp
//  SortingAlgorithms
//
//  Created by Abhishek Marda on 9/9/20.
//  Copyright © 2020 Abhishek Marda. All rights reserved.
//

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
            break;
        }
        case 3:
        {
            size = 1;
            arr = new int[size];
            arr[0] = 3;
            break;
        }
        case 4:
        {
            size = 6;
            arr = new int[size];
            arr[0] = 4;
            arr[1] = 3;
            arr[2] = 1;
            arr[3] = 0;
            arr[4] = 4;
            arr[5] = 3;
            break;
        }
        case 5:
        {
            size = 5;
            arr = new int[size];
            arr[0]=4;
            arr[1]=3;
            arr[2]=1;
            arr[3]=7;
            arr[4]=5;
            break;
        }
        case 6:
        {
            size =6;
            arr = new int[size];
            for (int i=0; i<size; ++i)
                arr[i]=3;
            break;
        }
    }
}


//
//  main.c
//  biggestSumofSubarray
//
//  Created by Tong Tingting on 13-12-9.
//  Copyright (c) 2013年 Tong Tingting. All rights reserved.
//

#include <stdio.h>

int main()
{
    
    int subArray(int array[]);
    int find_biggestArray(int sumsubarray[10][10]);
    
    int a[10]={-2,11,-4,13,-5,2,-5,-3,12,-9},maxSubArray;
    
    maxSubArray=subArray(a);
    printf("the max subarray is %d",maxSubArray);
    
    
}



int subArray(int array[10])
{
    int z[10][10]={0},i,j,max;
    for (i=0; i<10; i++) {
        z[0][i]=array[i];
    }
    for (j=1; j<10; j++) {
        for (i=0; i<=10-j; i++) {
            z[j][i]=z[j-1][i]+array[i+j];
        }
    }
    max=find_biggestArray(z);
    return max;
    
}


int find_biggestArray(int sumsubarray[10][10])
{
    int i,j,biggest=sumsubarray[0][0];
    for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            if (sumsubarray[i][j]>=biggest) {
                biggest=sumsubarray[i][j];
                
            }
        }
    }
    return biggest;
}




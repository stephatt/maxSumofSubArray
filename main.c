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
    
    int subArray(int array[10]);
    int find_biggestArray(int sumsubarray[10][10]);
    
    int a[10]={-2,11,-4,13,-5,2,-5,-3,12,-9},maxSubArray;
    
    maxSubArray=subArray(a);
    printf("the max subarray is %d",maxSubArray);
    
    
}



int subArray(int array[10])
{
    int z[9][9],i,j,max;
    for (j=0; j<10; j++) {
        for (i=0; i<10-j; i++) {
            if (j==0) {
                z[j][i]=array[i+j];
            }
            else z[j][i]=z[j-1][i]+array[i+j];
        }
    }
    max=find_biggestArray(z);
    return max;
    
}


int find_biggestArray(int sumsubarray[10][10])
{
    int i,j,t;
    for (j=0; j<10; j++) {
        for (i=0; i<10; i++) {
            if (sumsubarray[i][j]>sumsubarray[i-1][j]) {
                t=sumsubarray[i][j];
                sumsubarray[i][j]=sumsubarray[i-1][j];
                sumsubarray[i-1][j]=t;
            }
        }
    }
    for (j=0; j<10; j++) {
        if (sumsubarray[0][j]>sumsubarray[0][j-1]) {
            t=sumsubarray[0][j];
            sumsubarray[0][j]=sumsubarray[0][j-1];
            sumsubarray[0][j-1]=t;
        }
    }
    return sumsubarray[0][0];
}




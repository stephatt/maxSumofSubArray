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
    
    int max(int a,int b);
    int find_biggestArray(int *B,int k);
    
    int a[10]={-2,11,-4,13,-5,2,-5,-3,12,-9},maxSubArray;
    
    maxSubArray=find_biggestArray(a,10);
    printf("the max subarray is %d",maxSubArray);
    
    
}



int max(int a,int b)  //取大数
{
    return (a>b?a:b);
}
int find_biggestArray(int *B,int k)
{
    int m=0,n;//m存储：到B[i[结束的最大子数组和
    //n存储B[i]之前的最大数组和，可能包括B[i]，也可能不包括
    int i;
    n=B[0];
    for(i=1;i<k;i++)
    {
        m=max(B[i],m+B[i]);
        n=max(n,m);
    }
    return n;
}
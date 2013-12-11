maxSumofSubArray
================

给定一个长度为N的整数数组，求所有元素之和最大的一个子数组。


int main()

{
    int a[n],maxSubArray;
    maxSubArray=find_biggestArray(a,n);
}


int find_biggestArray(b[],n)
{
    m=0;
    n=b[0];
    for(i=1;i<n;i++)
    {  m=b[i]或者m+b[i]较大的；
       n=n或者m较大的；
     }
     return n；
}

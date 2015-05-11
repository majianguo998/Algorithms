#ifndef BINARYSEARCH_H_INCLUDED
#define BINARYSEARCH_H_INCLUDED

int BinarySearch(int* a,int size,int key)
{
    int left = 0;
    int right = size-1;
    while(left<=right)
    {
         //int mid = (left+right)/2;   //简单二分
         int mid = left + ((key-a[left])/(a[right]-a[left]))*(right-left); //插值
         if(key<a[mid])
            right = mid-1;
         else if(key>a[mid])
            left = mid+1;
         else
            return mid;
    }
    return 0;

}

#endif // BINARYSEARCH_H_INCLUDED

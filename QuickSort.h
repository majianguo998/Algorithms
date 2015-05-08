#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED

/**
将数组a划分，返回index，左边都小于a[index],右边都大于a[index]
*/
int partition(int* a,int l,int r)
{
    int x = a[r];
    int i = l-1;
    int temp;
    for(int j=l;j<r;j++)
    {
        if(a[j]<=x)
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[i+1];
    a[i+1] = a[r];
    a[r] = temp;

    return ++i;
}

void QuickSort(int* a,int l,int r)
{
    if(l < r)
    {
        int p = partition(a,l,r);
        QuickSort(a,l,p-1);
        QuickSort(a,p+1,r);
    }
}

#endif // QUICKSORT_H_INCLUDED

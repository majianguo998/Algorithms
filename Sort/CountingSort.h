#ifndef COUNTINGSORT_H_INCLUDED
#define COUNTINGSORT_H_INCLUDED

void CountingSort(int* a,int N,int* b,int k)
{
    int* c = new int[k+1];
    for(int i=0;i<=k;i++)
        c[i] = 0;
    for(int j=0;j<N;j++)
    {
        c[a[j]] = c[a[j]] + 1;
    }
    for(int i=1;i<=k;i++)
    {
        c[i] = c[i] + c[i-1];
    }
    for(int j=0;j<N;j++)
    {
        b[c[a[j]]-1] = a[j];
        c[a[j]] = c[a[j]] - 1;
    }
}

#endif // COUNTINGSORT_H_INCLUDED

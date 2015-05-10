#ifndef INSERTSORT_H_INCLUDED
#define INSERTSORT_H_INCLUDED

void InsertSort(int* a,int N)
{
    int i,j,k;
    for(i=1;i<N;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[j]<a[i]) break;
        }

        if(j != i-1)
        {
            int temp = a[i];
            for(k=i-1;k>j;k--)
                a[k+1] = a[k];
            a[k+1] = temp;
        }
    }
}


#endif // INSERTSORT_H_INCLUDED

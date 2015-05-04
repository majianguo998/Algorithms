#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED

void merge(int* a,int l,int m,int r)
{
    int n1 = m-l+1;
    int n2 = r-(m+1)+1;
    int* L = new int[n1+1];
    int* R = new int[n2+1];
    for(int i=0;i<n1;i++)
        L[i] = a[l+i];
    for(int i=0;i<n2;i++)
        R[i] = a[m+1+i];
    L[n1] = 32767;
    R[n2] = 32767;
    int i=0,j=0;
    for(int k=l;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
    }

    delete[] L;
    delete[] R;
}

void mergeSort(int* a,int l,int r)
{
   if(l<r)
   {
       int mid = (l+r)/2;
       mergeSort(a,l,mid);
       mergeSort(a,mid+1,r);
       merge(a,l,mid,r);
   }
}


#endif // MERGESORT_H_INCLUDED

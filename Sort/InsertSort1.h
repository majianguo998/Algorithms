#ifndef INSERTSORT1_H_INCLUDED
#define INSERTSORT1_H_INCLUDED

void InsertSort1(int* a,int l,int r)
{
    int i,j;
    for(j=l+1;j<=r;j++)
    {
        int temp = a[j];
        i = j-1;
        while(i>=l && a[i]>temp)
        {
            a[i+1] = a[i];
            i--;
        }

        a[i+1] = temp;
    }
}


#endif // INSERTSORT1_H_INCLUDED

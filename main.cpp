#include <iostream>
#include "QuickSort.h"
#include "InsertSort.h"
#include "InsertSort1.h"
#include "MergeSort.h"
#include "HeapSort.h"
using namespace std;

int main()
{
    const int N = 10;
    int a[N] = {8,4,7,100,5,4,2,9,80,4000};
    int* b = a;
    int b_size = sizeof(b)/sizeof(b[0]);
    cout<<"b size = "<<b_size<<endl;
    int size = sizeof(a)/sizeof(a[0]);
    cout<<"a size = "<<size<<endl;
    //InsertSort(a,N);
    //InsertSort1(a,0,N-1);
    //mergeSort(a,0,7);
    //HeapSort(a,N);
    QuickSort(a,0,9);
    for(int i=0;i<N;i++)
        cout << a[i] << " ";
    return 0;
}

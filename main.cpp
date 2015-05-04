#include <iostream>
#include "QuickSort.h"
#include "InsertSort.h"
#include "InsertSort1.h"
using namespace std;

int main()
{
    const int N = 6;
    int a[N] = {8,4,7,100,5,4};
    //InsertSort(a,N);
    InsertSort1(a,0,N-1);
    for(int i=0;i<N;i++)
        cout << a[i] << " ";
    return 0;
}

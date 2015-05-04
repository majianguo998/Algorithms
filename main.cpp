#include <iostream>
#include "QuickSort.h"
#include "InsertSort.h"
using namespace std;

int main()
{
    const int N = 6;
    int a[N] = {8,4,7,0,1,4};
    InsertSort(a,N);
    for(int i=0;i<N;i++)
        cout << a[i] << " ";
    return 0;
}

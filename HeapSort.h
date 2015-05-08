#ifndef HEAPSORT_H_INCLUDED
#define HEAPSORT_H_INCLUDED

/**
*维护堆的性质
*数组下标从0开始，父结点为i，左孩子结点为2i+1,右孩子结点为2i+2。
*child is i,father is (i-1)/2
*/
void MaxHeapIFY(int* a,int i,int heap_size)
{
    int left = 2*i+1;
    int right = 2*i+2;
    int largest;
    if(left<heap_size && a[left]>a[i])
        largest = left;
    else largest = i;
    if(right<heap_size && a[right]>a[largest])
        largest = right;
    if(largest != i)
    {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        MaxHeapIFY(a,largest,heap_size);
    }


}

void buildMaxHeap(int* a,int N)
{
    int size = N;
    int heap_size = size;
    for(int i= size/2-1;i>=0;i--)
    {
        MaxHeapIFY(a,i,heap_size);
    }
}

void HeapSort(int* a,int N)
{
    buildMaxHeap(a,N);
    int size = N;
    int heap_size = size;
    for(int i=size-1;i>0;i--)
    {
        int temp = a[i];
        a[i] = a[0];
        a[0] = temp;

        --heap_size;

        MaxHeapIFY(a,0,heap_size);
    }
}

#endif // HEAPSORT_H_INCLUDED

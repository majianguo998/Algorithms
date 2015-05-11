#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include "Hash.h"
#include "BinarySearch.h"
#include "../Sort/HeapSort.h"

int HashTest()
{
    cout<<"HashTabel's size is "<<sizeof(HashTabel)<<endl;
    HashTabel* H = (HashTabel*) malloc(sizeof(HashTabel));
    initHashTabel(H);
    cout<<"HashTabel H's size is "<<sizeof(H)<<endl;
    int key[12] = {12,67,56,16,25,37,22,29,15,47,48,34};
    for(int i=0;i<12;i++)
        InsertHash(H,key[i]);
    cout<<"HashTabel H's size is "<<sizeof(H)<<endl;
    cout<<SearchHash(H,66)<<endl;
    return 0;
}

int BinarySearchTest()
{
    int a[] = {2,45,67,23,43,65,91};
    int size = sizeof(a)/sizeof(a[0]);
    HeapSort(a,size);
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    int key = 91;
    cout<<BinarySearch(a,size,key)<<endl;
    return 0;
}

#endif // TEST_H_INCLUDED

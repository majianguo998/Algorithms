#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include "Hash.h"

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

#endif // TEST_H_INCLUDED

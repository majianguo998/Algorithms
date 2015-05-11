#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

#define SUCESS 1
#define UNSUCESS 0
#define HASHSIZE 12
#define NULLKEY -32768

#include <stdlib.h>

typedef int status;

typedef struct
{
    int* elem;
    int count;
} HashTabel;
int m = 0;

status initHashTabel(HashTabel* H)
{
    m = HASHSIZE;
    H->count = m;
    H->elem = (int*)malloc(m*sizeof(int));
    for(int i=0;i<m;i++)
    {
        H->elem[i] = NULLKEY;
    }
    return SUCESS;
}

int Hash(int k)
{
    return k % m;
}

void InsertHash(HashTabel* H,int key)
{
    int addr = Hash(key);
    while(H->elem[addr] != NULLKEY)
        addr = (addr+1) % m;
    H->elem[addr] = key;
}

status SearchHash(HashTabel* H,int key)
{
    int addr = Hash(key);
    while(H->elem[addr] != key)
    {
        addr = (addr+1) % m;
        if(H->elem[addr] == NULLKEY || addr == Hash(key))
            return UNSUCESS;
    }
    return SUCESS;
}



#endif // HASH_H_INCLUDED

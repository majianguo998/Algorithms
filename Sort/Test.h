/*
 * Test.h
 *
 *  Created on: 2015年5月10日
 *      Author: majianguo
 */

#ifndef TEST_H_
#define TEST_H_

#include <iostream>

#include "CountingSort.h"
#include "HeapSort.h"
#include "InsertSort.h"
#include "InsertSort1.h"
#include "MergeSort.h"
#include "QuickSort.h"
using namespace std;

int SortTest()
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
	//QuickSort(a,0,9);
	int* c = new int[N];
	CountingSort(a,N,c,1000000);
	for(int i=0;i<N;i++)
		cout << c[i] << " ";
	cout<<endl;
	for(int i=0;i<N;i++)
		cout << a[i] << " ";

	delete[] c;
	return 0;
}

#endif /* TEST_H_ */

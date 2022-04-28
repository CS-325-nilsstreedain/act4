/******************************************************************************
CS 325 Activity 4 Cookies
Sample Test Case
Input:
4
10 8 9 12
5
11 4 6 3 9
Output:
Max contentment = 2
Note: MergeSort is provided if you need a sorting algorithm or your solution
Save file as act4.cpp before submitting to Gradescope
*******************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

void merge(int A[], int l, int m, int r) 
{ 
  // Merge function for mergesort. Merges two sorted lists in increasing order
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = A[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = A[m + 1+ j]; 
  
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            A[k] = L[i]; 
            i++; 
        } 
        else
        { 
            A[k] = R[j]; 
            j++; 
        } 
        k++; 
    }  
    while (i < n1) 
    { 
        A[k] = L[i]; 
        i++; 
        k++; 
    }  
    while (j < n2) 
    { 
        A[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l = left index and r = index of the array A to be sorted increasing order */ 
void mergeSort(int A[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(A, l, m); 
        mergeSort(A, m+1, r);   
        merge(A, l, m, r); 
    } 
} 


int main()
{
	int greed[1000];     // childs' cookie greed for children 1..n
	int cookie[1000];    // cookie size for cookies 1..m
	int maxContent = 0; // maximum number of content children
	int n;				// number of children
	int m;				// number of cookies
	
	// get values for greed and cookie sizes
    cin >> n;
	for (int i = 1; i <= n; i++) {
			cin >> greed[i];
    }
	cin >> m;
	for (int i = 1; i <= m; i++) {
			cin >> cookie[i];
    }	
    // add your code below
	
	
	
	// output result
	cout << "Max contentment = "<<maxContent<<endl;

    return 1;
} 

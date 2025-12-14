#include <iostream>
using namespace std;

/*
 combine function:
 Merges two sorted subarrays into a single sorted array
*/
void combine(int a[], int s, int m, int e)
{
    int* buffer = new int[e + 1];   // Temporary array

    // Copy original array into buffer
    for (int k = s; k <= e; k++)
        buffer[k] = a[k];

    int i = s;       // Pointer for left subarray
    int j = m + 1;   // Pointer for right subarray
    int k = s;       // Pointer for main array

    // Merge elements in sorted order
    while (i <= m && j <= e)
    {
        if (buffer[i] <= buffer[j])
            a[k++] = buffer[i++];
        else
            a[k++] = buffer[j++];
    }

    // Copy remaining elements (if any)
    while (i <= m)
        a[k++] = buffer[i++];

    while (j <= e)
        a[k++] = buffer[j++];

    delete[] buffer;     // Free dynamic memory
}

/*
 Recursive merge sort function
*/
void mrgSort(int a[], int s, int e)
{
    if (s >= e)
        return;          // Base case

    int m = (s + e) / 2;
    mrgSort(a, s, m);        // Sort left half
    mrgSort(a, m + 1, e);    // Sort right half
    combine(a, s, m, e);     // Merge halves
}

/*
 Wrapper function for merge sort
*/
void mrgSort(int a[], int n)
{
    mrgSort(a, 0, n - 1);
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << ",";
    cout << endl;
}

int main()
{
    int arr[] = {102, 12, 193, 1932, 192, 11, 293, 39, 239};
    int size = sizeof(arr) / sizeof(int);

    display(arr, size);
    mrgSort(arr, size);
    display(arr, size);

    return 0;
}


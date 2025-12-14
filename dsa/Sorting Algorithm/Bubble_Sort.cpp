#include <iostream>
using namespace std;

/*
 swap function:
 Swaps two elements in the array using their indexes
*/
void swap(int a[], int x, int y)
{
    int temp = a[x];     // Store value of first index
    a[x] = a[y];         // Copy second value into first position
    a[y] = temp;         // Put stored value into second position
}

/*
 bubble function:
 Performs one backward pass of Bubble Sort
 Compares adjacent elements and swaps if required
*/
void bubble(int a[], int n)
{
    int i = n - 1;               // Start from last index
    while (i > 0)
    {
        if (a[i] < a[i - 1])     // Compare adjacent elements
        {
            swap(a, i, i - 1);   // Swap if out of order
        }
        i--;
    }
}

/*
 bblSort function:
 Repeats bubble() n-1 times to completely sort the array
*/
void bblSort(int a[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        bubble(a, n);            // One full pass
        i++;
    }
}

/*
 display function:
 Prints all elements of the array
*/
void display(int a[], int n)
{
    int i = 0;
    while (i < n)
    {
        cout << a[i] << ",";
        i++;
    }
    cout << endl;
}

int main()
{
    int arr[] = {102, 12, 193, 1932, 192, 11, 293, 39, 239};
    int size = sizeof(arr) / sizeof(int);   // Calculate array size

    display(arr, size);     // Display unsorted array
    bblSort(arr, size);     // Apply Bubble Sort
    display(arr, size);     // Display sorted array

    return 0;
}


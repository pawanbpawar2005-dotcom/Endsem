#include <iostream>
using namespace std;

/*
 insertIth function:
 Inserts element at index i into its correct position
 in the already sorted part of the array
*/
void insertIth(int a[], int n, int i)
{
    int key = a[i];          // Element to be inserted
    int j = i - 1;

    // Shift elements greater than key to the right
    while (j >= 0 && a[j] > key)
    {
        a[j + 1] = a[j];
        j--;
    }

    a[j + 1] = key;          // Place key at correct position
}

/*
 insSort function:
 Calls insertIth() for each element to sort the array
*/
void insSort(int a[], int n)
{
    int i = 1;               // Start from second element
    while (i < n)
    {
        insertIth(a, n, i);
        i++;
    }
}

/*
 display function:
 Prints array elements
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
    int size = sizeof(arr) / sizeof(int);

    display(arr, size);     // Unsorted array
    insSort(arr, size);     // Insertion sort
    display(arr, size);     // Sorted array

    return 0;
}


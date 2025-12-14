#include <iostream>
using namespace std;

/*
 swap function:
 Swaps two array elements
*/
void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

/*
 locOfSmallest function:
 Finds index of smallest element between s and e
*/
int locOfSmallest(int a[], int s, int e)
{
    int i = s;
    int j = i;

    while (i <= e)
    {
        if (a[i] < a[j])
            j = i;
        i++;
    }
    return j;
}

/*
 selSort function:
 Sorts array using Selection Sort technique
*/
void selSort(int a[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        int j = locOfSmallest(a, i, n - 1);
        swap(a, i, j);
        i++;
    }
}

/*
 display function:
 Prints array elements
*/
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
    selSort(arr, size);
    display(arr, size);

    return 0;
}


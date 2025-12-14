#include <iostream>          // Includes input-output stream library
using namespace std;

/*
 Binary_Search function:
 arr[] -> array in which we search
 n     -> number of elements in array
 key   -> element to be searched
 Returns index of key if found, otherwise -1
*/
int Binary_Search(int arr[], int n, int key)
{
    int start, mid, end;     // start = first index, end = last index, mid = middle index

    start = 0;               // Initialize start to first index
    end = n - 1;             // Initialize end to last index

    // Loop runs until search space becomes invalid
    while (start <= end)
    {
        mid = (start + end) / 2;   // Calculate middle index

        // If middle element matches the key
        if (arr[mid] == key)
        {
            cout << "Key found at index: " << mid << endl;
            return mid;            // Return index immediately
        }

        // If key is greater than middle element
        else if (key > arr[mid])
        {
            start = mid + 1;       // Search in right half of array
        }

        // If key is smaller than middle element
        else
        {
            end = mid - 1;         // Search in left half of array
        }
    }

    return -1;   // If loop ends, key was not found
}

int main()
{
    int n, key;

    cout << "Enter number of elements in array: ";
    cin >> n;

    int arr[n];   // Declare array of size n

    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];      // Input array elements
    }

    cout << "Enter the key you want to find: ";
    cin >> key;

    // Call Binary_Search function
    int Result_Index = Binary_Search(arr, n, key);

    // Check function return value
    if (Result_Index != -1)
    {
        cout << "Key found at index: " << Result_Index << endl;
    }
    else
    {
        cout << "Key not found in array" << endl;
    }

    return 0;   // Program ends successfully
}


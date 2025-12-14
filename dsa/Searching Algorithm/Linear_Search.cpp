#include <iostream>          // Includes input-output stream library
using namespace std;

/*
 Linear_Search function:
 arr[] -> array to search
 size  -> size of array
 key   -> element to find
 Returns index if found, else -1
*/
int Linear_Search(int arr[], int size, int key)
{
    // Traverse array from start to end
    for (int i = 0; i < size; i++)
    {
        // Compare each element with key
        if (arr[i] == key)
        {
            cout << "Key found at index: " << i << endl;
            return i;       // Return index if key is found
        }
    }

    return -1;              // Key not found in array
}

int main()
{
    int size, key;

    cout << "Enter size of the array: ";
    cin >> size;

    int arr[size];          // Declare array

    cout << "Enter elements of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];      // Take input elements
    }

    cout << "Enter the key you want to search: ";
    cin >> key;

    // Call Linear_Search function
    int Result_Index = Linear_Search(arr, size, key);

    // Check result
    if (Result_Index != -1)
    {
        cout << "The key found at index: " << Result_Index << endl;
    }
    else
    {
        cout << "Key not found at any index in array" << endl;
    }

    return 0;   // Program ends
}



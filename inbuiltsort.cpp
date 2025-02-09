#include <iostream>
#include <algorithm> // Include this header for the sort function
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; // Add a newline for better output formatting
}

int main()
{
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    sort(arr + 2, arr + 5); // Sort the array
    print(arr, 8);  
    sort(arr, arr + 8);     // Sort the array
    print(arr, 8);          // Print the sorted array
    sort(arr , arr + 8,greater<int>()); // Sort the array
    print(arr, 8);  
    return 0;
}

#include <iostream>
#include <climits>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; // Add a newline for better output formatting
}

void counting(int arr[], int n)
{
    int freq[10000]={0};
    int minval = INT32_MAX, maxval = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        minval = min(minval, arr[i]);
        maxval = max(maxval, arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = minval, j = 0; i <= maxval; i++)
    {

        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }

    print(arr, n);
}

int main()
{
    int arr[6] = {1, 4, 5, 7, 2, 3}; // Change size to 6
    int n = sizeof(arr) / sizeof(int);

    counting(arr, n);
    return 0;
}
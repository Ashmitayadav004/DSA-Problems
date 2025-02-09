
#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; // Add a newline for better output formatting
}

void selection(int arr[], int n)
{
   for(int i=0;i<n;i++)
   {
    int minidx=i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[minidx])
        {
            minidx=j;
        }
        swap(arr[i],arr[minidx]);
    }
   }
    print(arr, n);
}

int main()
{
    int arr[6] = {1, 4, 5, 7, 2, 3}; // Change size to 6
    int n = sizeof(arr) / sizeof(int);

    selection(arr, n);
    return 0;
}
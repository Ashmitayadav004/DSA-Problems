
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

void insertion(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]<curr)
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
   
    print(arr, n);
}

int main()
{
    int arr[6] = {1, 4, 5, 7, 2, 3}; // Change size to 6
    int n = sizeof(arr) / sizeof(int);

    insertion(arr, n);
    return 0;
}
// #include <iostream>
// using namespace std;

// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout<<endl;
// }
// void bubble(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1]) // for descending order we use <
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
//     print(arr, n);
// }
// int main()
// {
//     int arr[6] = {1, 4, 5, 7, 2, 3};
//     int n = sizeof(arr) / sizeof(int);

//     bubble(arr, n);
//     return 0;
// }





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

void bubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // for descending order we use <
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    print(arr, n);
}

int main()
{
    int arr[6] = {1, 4, 5, 7, 2, 3}; // Change size to 6
    int n = sizeof(arr) / sizeof(int);

    bubble(arr, n);
    return 0;
}
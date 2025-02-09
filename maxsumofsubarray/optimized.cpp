#include <iostream>
#include <climits> // Include this for INT32_MIN
using namespace std;

void maxSubarraySum1(int *arr, int n)
{
    int maxSum = INT32_MIN;
    for (int start = 0; start < n; start++)
    {
        int currsum = 0;
        for (int end = start; end < n; end++)
        {
            currsum+=arr[end];
            
            maxSum = max(maxSum, currsum);
        }
        cout << endl; // Print a new line after each start iteration
    }
    cout << "Maximum Subarray Sum: " << maxSum << endl; // Print the maximum sum
}

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubarraySum1(arr, n);
    return 0;
}


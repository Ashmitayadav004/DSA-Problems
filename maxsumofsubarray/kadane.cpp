#include <iostream>
#include <climits> // Include this for INT32_MIN
using namespace std;

void maxSubarraySum1(int *arr, int n)
{
    int maxSum = INT32_MIN;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        maxSum = max(currsum, maxSum);
        if (currsum < 0)
        {
            currsum = 0;
        }
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

#include <iostream>
#include <climits> // Include this for INT32_MIN
using namespace std;

void maxSubarraySum1(int *arr, int n)
{
    int maxSum = INT32_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currsum = 0;
            // Correct the inner loop to iterate from start to end
            for (int i = start; i <= end; i++)
            {
                currsum += arr[i];
            }
            cout << currsum << " "; // Print current sum for debugging
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



// dry runtime

// Initial Setup
// Input Array: arr = {2, -3, 6, -5, 4, 2}
// Size of Array: n = 6
// Initial Maximum Sum: maxSum = INT32_MIN (a very small number)


// Outer Loop: start from 0 to 5
// The outer loop iterates over the starting index of the subarray.

// Iteration 1: start = 0
// Inner Loop: end from 0 to 5
// end = 0:

// currsum = 0
// Inner loop: i = 0 → currsum = 2
// Print: 2
// Update maxSum = max(INT32_MIN, 2) = 2
// end = 1:

// currsum = 0
// Inner loop: i = 0 → currsum = 2
// Inner loop: i = 1 → currsum = -1
// Print: -1
// Update maxSum = max(2, -1) = 2
// end = 2:

// currsum = 0
// Inner loop: i = 0 → currsum = 2
// Inner loop: i = 1 → currsum = -1
// Inner loop: i = 2 → currsum = 5
// Print: 5
// Update maxSum = max(2, 5) = 5
// end = 3:

// currsum = 0
// Inner loop: i = 0 → currsum = 2
// Inner loop: i = 1 → currsum = -1
// Inner loop: i = 2 → currsum = 5
// Inner loop: i = 3 → currsum = 0
// Print: 0
// Update maxSum = max(5, 0) = 5
// end = 4:

// currsum = 0
// Inner loop: i = 0 → currsum = 2
// Inner loop: i = 1 → currsum = -1
// Inner loop: i = 2 → currsum = 5
// Inner loop: i = 3 → currsum = 0
// Inner loop: i = 4 → currsum = 4
// Print: 4
// Update maxSum = max(5, 4) = 5
// end = 5:

// currsum = 0
// Inner loop: i = 0 → currsum = 2
// Inner loop: i = 1 → currsum = -1
// Inner loop: i = 2 → currsum = 5
// Inner loop: i = 3 → currsum = 0
// Inner loop: i = 4 → currsum = 4
// Inner loop: i = 5 → currsum = 6
// Print: 6
// Update maxSum = max(5, 6) = 6
// End of start = 0: Print a new line.

// Iteration 2: start = 1
// Inner Loop: end from 1 to 5
// end = 1:

// currsum = 0
// Inner loop: i = 1 → currsum = -3
// Print: -3
// Update maxSum = max(6, -3) = 6
// end = 2:

// currsum = 0
// Inner loop: i = 1 → currsum = -3
// Inner loop: i = 2 → currsum = 3
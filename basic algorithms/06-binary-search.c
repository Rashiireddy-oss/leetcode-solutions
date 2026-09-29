#include <stdio.h>

int binarySearch(int nums[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    // Test Case 1
    int nums1[] = {1, 3, 5, 7, 9};
    int target1 = 5;

    printf("Test Case 1: %d\n", binarySearch(nums1, 5, target1));

    // Test Case 2
    int nums2[] = {1, 3, 5, 7, 9};
    int target2 = 6;

    printf("Test Case 2: %d\n", binarySearch(nums2, 5, target2));

    return 0;
}
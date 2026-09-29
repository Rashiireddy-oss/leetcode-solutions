#include <stdio.h>

void moveZeroes(int nums[], int n)
{
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[j] = nums[i];
            j++;
        }
    }

    while (j < n)
    {
        nums[j] = 0;
        j++;
    }
}

void printArray(int nums[], int n)
{
    printf("[");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d", nums[i]);

        if (i < n - 1)
        {
            printf(", ");
        }
    }

    printf("]\n");
}

int main()
{
    // Test Case 1
    int nums1[] = {0, 1, 0, 3, 12};
    int n1 = 5;

    moveZeroes(nums1, n1);

    printf("Test Case 1: ");
    printArray(nums1, n1);

    // Test Case 2
    int nums2[] = {0, 0, 1};
    int n2 = 3;

    moveZeroes(nums2, n2);

    printf("Test Case 2: ");
    printArray(nums2, n2);

    return 0;
}
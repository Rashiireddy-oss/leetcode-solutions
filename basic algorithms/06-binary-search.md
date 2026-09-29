## Problem: Binary Search (Easy-Medium)

**Link:** [LeetCode Binary Search](https://leetcode.com/problems/binary-search/)

### Approach

I used binary search to find the target element in a sorted array. I repeatedly checked the middle element and reduced the search range to either the left or right half.

### Complexity

* Time: O(log n)
* Space: O(1)

### Notes

The array must be sorted before using binary search. If the target is not present, the function returns -1.

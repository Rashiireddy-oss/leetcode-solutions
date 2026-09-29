## Problem: Reverse a Linked List (Easy)

**Link:** [LeetCode Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/submissions/2156636016/)

### Approach

I used three pointers: `prev`, `current`, and `next`. I changed the direction of each link one by one until the complete linked list was reversed.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

The first node becomes the last node after reversing. The `prev` pointer becomes the new head of the linked list.

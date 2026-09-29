## Problem: Valid Parentheses (Easy-Medium)

**Link:** [LeetCode Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

### Approach

I used a stack to store the opening brackets. Whenever a closing bracket is found, I checked whether it matches the most recent opening bracket. If all brackets match correctly, the string is valid.

### Complexity

* Time: O(n)
* Space: O(n)

### Notes

Every opening bracket must have a matching closing bracket in the correct order. The stack helps check the brackets from the most recently opened bracket.

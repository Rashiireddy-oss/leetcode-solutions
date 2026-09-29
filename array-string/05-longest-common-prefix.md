## Problem: Longest Common Prefix (Easy-Medium)

**Link:** [LeetCode Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)

### Approach

I compared the characters of all strings one by one starting from the first character. When a character is different or a string ends, I stopped and returned the common characters found so far.

### Complexity

* Time: O(n × m)
* Space: O(1)

### Notes

The common prefix must be present at the beginning of every string. If there is no common prefix, the answer is an empty string.

## Problem: Best Time to Buy and Sell Stock (Easy-Medium)

**Link:** [LeetCode Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

### Approach

I kept track of the minimum price seen so far and calculated the profit by subtracting it from the current price. I updated the maximum profit whenever a higher profit was found.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

The stock must be bought before it is sold. If no profit can be made, the answer is 0.

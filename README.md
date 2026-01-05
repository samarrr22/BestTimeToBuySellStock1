# Best Time to Buy and Sell Stock (C)

## LeetCode Reference
LeetCode 121 – Best Time to Buy and Sell Stock  
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Problem Description
Given an array of daily stock prices, determine the maximum profit that can be achieved by buying once and selling once later.

## Real-Life Use Case
This problem models a simplified financial analysis system that identifies the best possible buy and sell days using historical price data.

## Solution Approach
- Track the minimum price seen so far
- Compute profit for each day
- Update the maximum profit
- One-pass greedy algorithm

## Time and Space Complexity
- Time Complexity: O(n)
- Space Complexity: O(1)

## How to Build and Run Tests
```bash
make

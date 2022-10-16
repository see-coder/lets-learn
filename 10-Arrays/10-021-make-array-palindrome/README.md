## [Problem](https://www.geeksforgeeks.org/find-minimum-number-of-merge-operations-to-make-an-array-palindrome/)

Given an array of positive integers. We need to make the given array a ‘Palindrome’. The only allowed operation is ”merging” (of two adjacent elements). Merging two adjacent elements means replacing them with their sum. The task is to find the minimum number of merge operations required to make the given array a ‘Palindrome’.

To make any array a palindrome, we can simply apply merge operation n-1 times where n is the size of the array (because a single-element array is always palindromic, similar to single-character string). In that case, the size of array will be reduced to 1. But in this problem, we are asked to do it in the minimum number of operations.

`Example 1:`  
Input: arr[] = {15, 4, 15}  
Output: 0  
Explanation: Array is already a palindrome. So we do not need any merge operation.

`Example 2:`  
Input: arr[] = {1, 4, 5, 1}  
Output: 1  
Explanation: We can make given array palindrome with minimum one merging (merging 4 and 5 to make 9).

`Example 3:`  
Input: arr[] = {11, 14, 15, 99}  
Output: 3  
Explanation: We need to merge all elements to make a palindrome.

`Note:` The expected time complexity is `O(n)`.
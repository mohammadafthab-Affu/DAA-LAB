# DAA-LAB
# PRACTICAL-1: 
## Summary :

Bubble Sort – Repeatedly swaps adjacent elements until the array is sorted.

Selection Sort – Finds the smallest element and places it in the correct position.

Insertion Sort – Inserts each element into its correct position in the sorted part of the array.

Merge Sort – Uses the divide-and-conquer approach by splitting the array, sorting each half, and merging them.

Quick Sort – Selects a pivot, partitions the array, and recursively sorts the partitions.

## conclusion:

This program demonstrates the performance differences between basic and advanced sorting algorithms. 
For larger datasets, Merge Sort and Quick Sort are generally much faster than Bubble Sort, Selection Sort, and Insertion Sort, making them more suitable for efficient sorting tasks.

 #  
# PRACTICAL-2
## SUMMARY:

This C++ program compares Linear Search and Binary Search by searching for a user-entered element in a sorted array of 100,000 elements. It measures the execution time of both algorithms using the chrono library and displays the search result along with the time taken.

## Conclusion:

The program demonstrates that Binary Search is much faster than Linear Search for large sorted arrays because it repeatedly divides the search space in half. It highlights the importance of choosing an efficient search algorithm to improve performance.
# 
# PRACTICAL-3
## Summary

Heap Sort is an efficient comparison-based sorting algorithm that uses a Max Heap to sort elements. It first converts the given array into a Max Heap, where the largest element is placed at the root. The algorithm then repeatedly swaps the root with the last unsorted element, reduces the heap size, and restores the Max Heap property. This process continues until the entire array is sorted in ascending order.

## Conclusion

Heap Sort is a reliable and efficient sorting algorithm with a time complexity of O(n log n) in the best, average, and worst cases. It sorts the array in-place, requiring only O(1) extra space. Because of its consistent performance and low memory usage, Heap Sort is well suited for applications where predictable execution time and efficient memory utilization are important.
#
#  PRACTICAL-4
## Summary

This C++ program calculates the factorial of a non-negative integer using **two methods: iterative and recursive**. The iterative method uses a `for` loop, while the recursive method repeatedly calls itself until it reaches the base case. The program also measures and displays the execution time of both methods using the `chrono` library. Both methods have **O(n) time complexity**, but the iterative method uses **O(1) space**, whereas the recursive method uses **O(n) space** because of the function call stack.

## Conclusion

The program demonstrates that both iterative and recursive approaches can be used to calculate factorial efficiently. The **iterative approach is generally more memory-efficient** because it does not require additional stack space. The recursive approach is simpler and demonstrates the concept of recursion, but it requires extra memory for function calls. Therefore, for practical use, the **iterative method is usually preferred** when memory efficiency is important.

# PRACTICAL-7
## Summary

This program solves the **Coin Change Problem using Dynamic Programming**. It finds the minimum number of coins required to make a given amount and also displays the coins used. The `dp` array stores the minimum coins needed for each amount, while `coinUsed` keeps track of which coin was selected.

## Conclusion

The program efficiently finds the minimum number of coins using **Dynamic Programming**. It avoids repeated calculations and works well for different coin values and amounts. If the required amount cannot be formed, the program clearly displays that change cannot be made.

# PRACTICAL-5
## Summary

This program implements the 0/1 Knapsack Problem using Dynamic Programming. It uses five items with predefined weights and values and a knapsack capacity of 9. The DP table stores the maximum value possible for different capacities. Each item is either selected or not selected to obtain the best possible value.

## Conclusion

The program successfully finds the maximum value of 21 without exceeding the given capacity. Dynamic Programming provides an effective method to find the optimal combination of items while ensuring that each item is selected at most once.

# PRACTICAL-6
## Summary

This program implements the Matrix Chain Multiplication problem using Dynamic Programming. It uses four matrices with fixed dimensions: A1 (10×20), A2 (20×30), A3 (30×40). The dp table stores the minimum number of scalar multiplications required to multiply different groups of matrices. The program checks all possible ways of dividing the matrix chain and selects the order that requires the minimum number of operations.

## Conclusion

The program successfully finds the optimal order for multiplying the given matrices using Dynamic Programming. It calculates that the minimum number of scalar multiplications required is 2,000. This approach helps avoid unnecessary calculations and provides an efficient way to determine the best multiplication order for a chain of matrices.

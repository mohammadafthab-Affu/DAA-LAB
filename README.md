# DAA-LAB
# PRACTICAL-1: 
# Summary :

Bubble Sort – Repeatedly swaps adjacent elements until the array is sorted.

Selection Sort – Finds the smallest element and places it in the correct position.

Insertion Sort – Inserts each element into its correct position in the sorted part of the array.

Merge Sort – Uses the divide-and-conquer approach by splitting the array, sorting each half, and merging them.

Quick Sort – Selects a pivot, partitions the array, and recursively sorts the partitions.

# conclusion:

This program demonstrates the performance differences between basic and advanced sorting algorithms. 
For larger datasets, Merge Sort and Quick Sort are generally much faster than Bubble Sort, Selection Sort, and Insertion Sort, making them more suitable for efficient sorting tasks.

 #  
# PRACTICAL-2
# SUMMARY:

This C++ program compares Linear Search and Binary Search by searching for a user-entered element in a sorted array of 100,000 elements. It measures the execution time of both algorithms using the chrono library and displays the search result along with the time taken.

# Conclusion:

The program demonstrates that Binary Search is much faster than Linear Search for large sorted arrays because it repeatedly divides the search space in half. It highlights the importance of choosing an efficient search algorithm to improve performance.
# 
# PRACTICAL-3
# Summary

Heap Sort is an efficient comparison-based sorting algorithm that uses a Max Heap to sort elements. It first converts the given array into a Max Heap, where the largest element is placed at the root. The algorithm then repeatedly swaps the root with the last unsorted element, reduces the heap size, and restores the Max Heap property. This process continues until the entire array is sorted in ascending order.

# Conclusion

Heap Sort is a reliable and efficient sorting algorithm with a time complexity of O(n log n) in the best, average, and worst cases. It sorts the array in-place, requiring only O(1) extra space. Because of its consistent performance and low memory usage, Heap Sort is well suited for applications where predictable execution time and efficient memory utilization are important.
#

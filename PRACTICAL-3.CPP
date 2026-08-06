#include <iostream>
using namespace std;

// Function to arrange the subtree as a Max Heap
void heapify(int arr[], int n, int i) {
    int largest = i;              // Assume the current node is the largest
    int left = 2 * i + 1;         // Find the left child
    int right = 2 * i + 2;        // Find the right child

    // Check if the left child is larger than the current largest
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Check if the right child is larger than the current largest
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If the largest element is not the root, swap them
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Heapify the affected subtree again
        heapify(arr, n, largest);
    }
}

// Function to perform Heap Sort
void heapSort(int arr[], int n) {

    // Step 1: Convert the array into a Max Heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Step 2: Move the largest element to the end
    // and rebuild the heap for the remaining elements
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);     // Move the largest element to its correct position
        heapify(arr, i, 0);       // Restore the Max Heap
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function
int main() {

    // Original array
    int arr[] = {12, 11, 13, 5, 6, 7};

    // Find the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Original array: ";
    printArray(arr, n);

    // Sort the array using Heap Sort
    heapSort(arr, n);

    // Display the sorted array
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

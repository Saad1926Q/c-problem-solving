## C Problem Solving

This repository is aimed at reinforcing C programming knowledge through problem-solving. Each problem is solved and documented to serve as both a learning tool and a reference.

## Arrays Problems

### 1. Find Maximum and Minimum in an Array (`arrays_01.c`)
- **Problem:** Given an array of size `N`, find the maximum and minimum elements using the minimum number of comparisons.
- **Solution:** The program scans through the array once, comparing each element to track the minimum and maximum.

### 2. Reverse an Array (`arrays_02.c`)
- **Problem:** Write a C program to reverse the elements of an array.
- **Solution:** This solution swaps elements symmetrically from the start and end of the array.

### 3. Split Array into Odd and Even Arrays (`arrays_03.c`)
- **Problem:** Given an array of numbers, split the array into two separate arrays containing the odd and even numbers.
- **Solution:** The program first counts odd and even numbers, then splits the original array into two new arrays accordingly.

### 4. Maximum Sum of Contiguous Subarray (`arrays_04.c`)
- **Problem:** Find the contiguous subarray with the maximum sum in a given array of integers.
- **Solution:** The solution implements a brute force approach to calculate all subarrays' sums and keeps track of the maximum sum found.

### 5. Rotate an Array by K Steps (`arrays_05.c`)
- **Problem:** Rotate an array of `n` elements to the left by `k` steps.
- **Solution:** The program shifts the elements one-by-one for `k` iterations to achieve the rotation.

### 6. Find Missing Number in Array (`arrays_06.c`)
- **Problem:** Given an array containing `n` distinct numbers taken from `0, 1, 2, ..., n`, find the missing number.
- **Solution:** This solution checks for each number between `0` and `n` to determine the missing one by scanning the array.

### 7. Find Duplicate Elements in an Array (`arrays_07.c`)
- **Problem:** Given an array of integers, find all duplicate elements.
- **Assumptions:** The array contains integers in the range [1, n], where n is the size of the array.
- **Solution:** The solution tracks each element with a boolean visited array to ensure that duplicates are not printed more than once.

### 8. Find Longest Consecutive Sequence (`arrays_08.c`)
- **Problem:** Given an unsorted array of integers, find the length of the longest consecutive sequence of numbers.
- **Solution:** First, the array is sorted, and then the longest consecutive sequence is found by checking consecutive elements.


### 9. Subarray sum equals to k. (`arrays_09.c`)
- **Problem:** Given an unsorted array of integers, display the Subarrays with sum equals to k.
- **Solution:** The code implements a brute-force approach to find and count all subarrays within a given integer array that sum to a specified target. It iterates through all possible subarrays, calculating their sums and displaying those that match the target.

---

## String Problems

### 1. Concatenate Two Strings Without `strcat` (`strings_01.c`)
- **Problem:** Concatenate two strings without using the `strcat` function.
- **Approach:** 
  - Allocate memory for both strings and a result string.
  - Copy characters from the first string into the result string.
  - Append characters from the second string into the result.
  - Ensure null termination in the result string.

### 2. Reverse a String Using Recursion (`strings_02.c`)
- **Problem:** Reverse a given string using recursion.
- **Approach:** 
  - Use recursion to swap characters from the start and end of the string until the middle is reached.
  - Adjust the base case of the recursion to stop when the middle index is reached.

### 3. Find the Length of the Longest Substring Without Repeating Characters (`strings_03.c`)
- **Problem:** Find the longest substring without repeating characters in a given string.
- **Approach:** 
  - Use two nested loops: the outer loop selects starting positions, and the inner loop expands the substring.
  - Track unique characters in the substring using a character frequency array.
  - Keep track of the longest valid substring during the iterations.

---

## Linked List Problems

### 1. Linked List Creation and Traversal (`linked_list_01.c`)
- **Problem:** Write a C program to create a linked list and traverse it to print all elements.
- **Solution:** The linked list is built using dynamically allocated nodes, and a function is used to print the list.

### 2. Linked List Insertion (`linked_list_02.c`)
- **Problem:** Implement functions to insert nodes at the beginning, end, and after a specific node in a linked list.
- **Solution:**
  - Insert at the beginning.
  - Insert at the end.
  - Insert after a specified node.

### 3. Linked List Deletion (`linked_list_03.c`)
- **Problem:** Write functions to delete nodes from a linked list in different scenarios:
  - Delete the first node.
  - Delete a node in between.
  - Delete the last node.
  - Delete a node at a given position.
- **Solution:**
  - The functions handle memory management and pointer updates to remove nodes safely.

---

## Stack Problems

### 1. Implement a Stack (`stack_01.c`)
- **Problem:** Implement a stack in C.
- **Approach:** 
  - Define a stack structure with size, top pointer, and an array for storage.
  - Implement `push`, `pop`, and `peek` operations that modify and interact with the stack.

### 2. Stack Operations (`stack_02.c`)
- **Problem:** Implement stack operations such as push, pop, and peek.
- **Approach:** 
  - Push: Increment the top pointer and add a new element.
  - Pop: Remove the element at the top of the stack and decrement the top pointer.
  - Peek: Display the element at the top without removing it.

### 3. Parenthesis Matching Using Stack (`stack_03.c`)
- **Problem:** Check if parentheses in a given expression are balanced using a stack.
- **Approach:** 
  - Traverse the expression and push every opening parenthesis onto the stack.
  - Pop the stack for every closing parenthesis.
  - At the end, check if the stack is empty (balanced) or contains unclosed parentheses.

### 4. Stack Using Linked List (`stack_04.c`)
- **Problem:** Implement a stack using a linked list.
- **Approach:** 
  - Use a linked list where each node represents a stack element.
  - Push: Insert a new node at the beginning of the list.
  - Pop: Remove the first node of the list and free the memory.
  - Handle cases for stack overflow (memory exhaustion) and underflow (empty stack).
  
  **Concept:** 
  - While initializing, set `top = NULL`.
  - **Stack empty condition:** `top == NULL`.
  - **Stack full condition:** Occurs when heap memory is exhausted.

---

## Queue Problems

### 1. Implement a Queue and Operations (`queue_01.c`)
- **Problem:** Implement a queue and its operations in C.
- **Approach:** 
  - Define a queue structure with front and rear pointers, an array for storage, and a size field.
  - Implement enqueue, dequeue, and display operations.
  - Enqueue: Insert an element at the rear.
  - Dequeue: Remove an element from the front and shift the front pointer.


### 2. Implement Queue Using Linked List (`queue_02.c`)
- **Problem:** Implement a queue using a linked list.
- **Approach:** 
  - Use a linked list where each node represents a queue element.
  - Enqueue: Insert a new node at the rear of the list.
  - Dequeue: Remove the node from the front and free its memory.
  - Handle cases for empty and full queues (based on memory availability).

  **Concept:** 
  - While initializing, set `f(front) = r(rear) = NULL`.
  - **Empty condition:** `f == NULL`.
  - **Full condition:** Occurs when heap memory is exhausted.
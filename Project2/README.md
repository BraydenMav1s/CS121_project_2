 Bubble Sort and Pointers – Simple Algorithm Notes

 Overview
This program will sort an array of 9 integers using a basic bubble sort. It will  also show how pointers work by swapping integer values directly in memory. It then will  print the array after each swap to see how it changes step by step.

 Functions Needed
1. main()
2. printValues(int *arr)
3. swap(int *a, int *b)
4. sort(int *arr)


 Algorithm Details

 main()
- Define an integer array (size 9).
- Print a “Before:” label.
- Call printValues to display initial array values.
- Test swapping two integers (x and y) with the swap function.
- Call sort(values) to sort the array.
- Print an “After:”.
- Call printValues again to confirm the array is sorted.
- Return 0.

 printValues(int *arr)
- Input: pointer to an array of 9 ints.
- Output: prints the array values in one line.
- Steps:
  1. Print a bracket or some identifier.
  2. Loop over the 9 elements (i = 0 to 8).
  3. Print each element with a space.
  4. Print a closing bracket and newline.

 swap(int *a, int *b)
- Input: two pointers to integers.
- Output: nothing, but the two integers in memory should be swapped.
- Steps:
  1. Use a temporary variable: `temp`.
  2. temp = *a.
  3. *a = *b.
  4. *b = temp.

sort(int *arr)
- Input: pointer to an array of 9 ints.
- Output: none (just sorts in place).
- Bubble sort approach:
  1. Set MAX = 9.
  2. Loop i from 0 to MAX-1.
  3. Inside that, loop j from 0 to MAX-2.
  4. If arr[j] > arr[j+1], call swap(&arr[j], &arr[j+1]).
  5. Each time you swap, call printValues(arr) to see the array state.
  6. After all passes, the array is sorted.

 Done
By following these steps, the code will sort the array and print all the states of the bubble sort.


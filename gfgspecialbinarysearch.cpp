// Binary Search in C++
//how to find first ocurencce of an elment

#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
    int result=-1;
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (x == array[mid])
     {
        result=mid;
        high=mid-1;       
     } 

    if (x > array[mid])
      low = mid + 1;

    else
      high = mid - 1;
  }

  return result;
}

int main(void) {
  int array[] = {3,4,5,6,7};
  int x = 5;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
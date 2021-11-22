/*

Binary Search in sorted array can be done by two methods

1) iterative method
2) recursive method

algorithm
---------


3        4         5         6         7         8         9  

let key = 4 we need to find

1. set 'low' and 'high' pointers at the lowest and highest positions.

        3        4         5         6         7         8         9  
        low                                                        high

2.Find the middle element ( mid )of the array.

    arr[ (low + high) / 2 ]

    arr[ (3 + 9) / 2 ] = 12 / 2 = 6

        3        4         5         6         7         8         9  
        low                          mid                           high

3. if key == mid , then return mid  (4!=6) : FALSE

   else compare the key with mid

4. if key > mid, compare key with middle element of the elements on the RHS of mid.
     this is done by setting low = mid + 1

5. Else, compare x with the middle element of the elements on the left side of mid. 
    this is done by setting high = mid - 1.

        3        4         5         6         7         8         9  
        low                          mid                           high 
        ---------LHS--------                   ----------RHS---------

5. Here the key is 4 and mid is 6. So the key < mid ::: the key ll be on the Left side of mid.
   we ll then set high to mid-1

        3        4         5         6         7         8         9  
        low                high      mid        
        ---------LHS-----------

        
        3           4            5         
        low                 high = mid - 1         
        --------- -LHS----------------------

         3           4            5         
        low         mid         high         
        --------- --LHS---------------------

6. repeat steps from 3 to 5

 checking step 3 if x == mid then return mid
  
       mid = 4

       if  4 == mid  => 4 == 4 : TRUE

       element 4 found!


ITERATION METHOD
----------------

do until the pointers low and high meet each other.
    mid = (low + high)/2
    if (x == arr[mid])
        return mid
    else if (x > arr[mid]) // x is on the right side
        low = mid + 1
    else                       // x is on the left side
        high = mid - 1


RECURSIVE METHOD
----------------

binarySearch(arr, x, low, high)
    if low > high
        return False 
    else
        mid = (low + high) / 2 
        if x == arr[mid]
            return mid
        else if x > arr[mid]        // x is on the right side
            return binarySearch(arr, x, mid + 1, high)
        else                               // x is on the right side
            return binarySearch(arr, x, low, mid - 1)


*/

// RECURSIVE METHOD

// Binary Search in C

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (array[mid] == x)
      return mid;

    // Search the left half
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    // Search the right half
    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 4;
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
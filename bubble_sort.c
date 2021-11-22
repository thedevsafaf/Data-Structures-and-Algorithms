/*

Suppose we are trying to sort the elements in ascending order.

1. First Iteration (Compare and Swap)

    * Starting from the first index, compare the first and the second elements.

    * If the first element is greater than the second element, they are swapped.

    * Now, compare the second and the third elements. Swap them if they are not in order.

    * The above process goes on until the last element.

2. Remaining Iteration

    * The same process goes on for the remaining iterations.

    * After each iteration, the largest element among the unsorted elements is placed at the end.

    * In each iteration, the comparison takes place up to the last unsorted element.

    * The array is sorted when all the unsorted elements are placed at their correct positions.

      if a[i]>a[i+1]
        (swap)
      else
        (no swap) 


    1    32,45,23,12,65,8
         -----
    2    32,45,23,12,65,8
            -----
    3    32,23,45,12,65,8        
               -----
    4    32,23,12,45,65,8
                  -----
    5    32,23,12,45,65,8
                     ----
    6    32,23,12,45,8,65

    end of first iteration

    1    32,23,12,45,8,65
         `````
    2    23,32,12,45,8,65
            `````
    3    23,12,32,45,8,65
               `````
    4    23,12,32,45,8,65
                  `````
    5    23,12,32,8,45,65
                    `````
    6    23,12,32,8,45,65

    end of second iteration 

    1    23,12,32,8,45,65
         `````
    2    12,23,32,8,45,65
            `````
    3    12,23,32,8,45,65
               `````
    4    12,23,8,32,45,65
                 `````
    5    12,23,8,32,45,65
                    `````
    6    12,23,8,32,45,65

    end of third iteration

    1    12,23,8,32,45,65
         `````
    2    12,23,8,32,45,65
            `````
    3    12,8,23,32,45,65
              `````
    4    12,8,23,32,45,65
                 `````
    5    12,8,23,32,45,65
                    `````
    6    12,8,23,32,45,65

    end of fourth iteration

    1    12,8,23,32,45,65
         `````
    2    8,12,23,32,45,65
           `````
    3    8,12,23,32,45,65
              ``````
    4    8,12,23,32,45,65
                 `````
    5    8,12,23,32,45,65
                    `````

        |``````````````````|            
    6     8,12,23,32,45,65
        |                  |
        ```````````````````` 

    end of fifth iteration

    so for n number of elements for sorting n-1 iteration occurs

    n = 6
    no of iterations = n - 1 = 6 - 1 = 5

  
Algorithm
---------

bubbleSort(array)
  for i <- 1 to indexOfLastUnsortedElement-1
    if leftElement > rightElement
      swap leftElement and rightElement
end bubbleSort

*/

#include<stdio.h>

void bubbleSort(int array[], int n){
    int i,j,temp;
    // loop to access each array element
    for(i = 0; i < n - 1; i++)
    {
        // loop to compare array elements
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void displayArray(int array[], int n){
    for(int i = 0; i < n; i++ )
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main()
{
    int array[] = {-2,45,0,11,-9};
    int n = sizeof(array) / sizeof(array[0]);
    bubbleSort(array,n);
    printf("Sorted Array in Ascending Order:\n");
    displayArray(array,n);
}




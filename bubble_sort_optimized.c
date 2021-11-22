/*

Optimized Bubble Sort
---------------------

    In the above algorithm, all the comparisons are made even if the array is already sorted.

    This increases the execution time.

    To solve this, we can introduce an extra variable swapped. The value of swapped is set true if there occurs swapping of elements. Otherwise, it is set false.

    After an iteration, if there is no swapping, the value of swapped will be false. This means elements are already sorted and there is no need to perform further iterations.

    This will reduce the execution time and helps to optimize the bubble sort.

Algorithm for Optimized Bubble Sort
-----------------------------------

bubbleSort(array)
  swapped <- false
  for i <- 1 to indexOfLastUnsortedElement-1
    if leftElement > rightElement
      swap leftElement and rightElement
      swapped <- true
end bubbleSort

*/


#include<stdio.h> 

void bubbleSort(int array[], int n) 
{
  //loop to compare each array element  
  for (int i = 0; i < n - 1; i++)   
  {
    // check if swapping occurs  
    int swapped = 0;

    // loop to compare array elements
    for (int j = 0; j < n - i - 1; j++) {
      
        // compare two array elements
        // change > to < to sort in descending order
        if (array[j] > array[j + 1]) {
            
            // swapping occurs if elements are not in intended order
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            
            swapped = 1;
        }
    }
    
    // no swapping means the array is already sorted
    // so no need for further comparison
    if (swapped == 0) {
      break;
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
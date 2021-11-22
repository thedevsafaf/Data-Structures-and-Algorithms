/*

Consider the array [10,5,2,1]

The first element is 10. The next part we must find the smallest number from the remaining array. The smallest number from 5 2 and 1 is 1. So, we replace 10 by 1.

The new array is [1,5,2,10] Again, this process is repeated.

Finally, we get the sorted array as [1,2,5,10].

Let us continue with this article on Selection Sort in C and see how the algorithm works,

Algorithm for Selection Sort:
-----------------------------

Step 1 − Set min to the first location

Step 2 − Search the minimum element in the array

Step 3 – swap the first location with the minimum value in the array

Step 4 – assign the second element as min.

Step 5 − Repeat the process until we get a sorted array.

*/

#include<stdio.h>
int main() 
{
    int i,j,pos,swap; 
    int a[] = {10,3,54,6,1};
    int n = sizeof(a) / sizeof(a[0]);
    for(i = 0; i < n - 1; i++)
    {
        pos = i;
        for(j = i + 1; j < n; j++)
        {
            // To sort in descending order, change > to < in this line.
            // Select the minimum element in each loop.
            if(a[pos] > a[j])
            pos = j;
        }
        if(pos != i)
        {
            swap = a[i];
            a[i] = a[pos];
            a[pos] = swap;
        }
    }
    printf("Sorted Array:\n");
    for(i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}























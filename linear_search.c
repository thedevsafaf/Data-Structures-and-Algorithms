
#include <stdio.h>

int search(int arr[],int n, int k){
    // Going through array sequentially
    for(int i=0;i<n;i++)
        if(arr[i]==k)
            return i;
    return -1;
}

int main()
{
    int n,i,k;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter array elements:");
    for(i=0;i<n;i++){
        printf("\n item %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nenter key:");
    scanf("%d",&k);
    int result = search(arr,n,k);
    printf("array:\n\n");
    printf("indices:\n");
    for(int i=0;i<n;i++)
        printf("%d\t",i);
    printf("\nelements:\n");
    for(int i=0;i<n;i++)
        printf("%d\t",arr[i]);
     (result == -1) ? printf("\n\nElement not found") : printf("\n\nElement %d found at index: %d or position: %d",k, result,result+1);
    return 0;
}


/*

arr[5] = {23,43,456,76,34};

key = 456
     
n = 5 ..........    20 / 4  
                   total int size of array with 5 elements = 5*4 = 20 (numerator)
                   int size of any array element = 4            so n = 20/4 = 5 
                             

           0 to 4 
for i from 0 t0 n-1

condition arr[i] == key ? return i : return -1;

if arr[0] == 456
    arr[0] != 456
    23 != 456
    i++
if arr[1] == 456
    arr[1] != 456
    43!=456
    i++

if arr[2] == 456
  456 == 456
  return i
  2
  index of the key element

result ==> element found at position 2.

*/
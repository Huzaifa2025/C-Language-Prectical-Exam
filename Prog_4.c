#include<stdio.h>

int main()
{
    int arr[5] = {1 , 2 ,3 ,4 , 5};
    int *ptr;

    ptr = &arr[5];

    printf("Cube of Array Values :- %d",arr[0] * arr[0]);
    printf("\nCube of Array Values :- %d",arr[1] * arr[1]);
    printf("\nCube of Array Values :- %d",arr[2] * arr[2]);
    printf("\nCube of Array Values :- %d",arr[3] * arr[3]);
    printf("\nCube of Array Values :- %d",arr[4] * arr[4]);
    return 0;
}
#include<stdio.h>

int main()
{
    int arr[5] = {1 , 2 ,3 ,4 , 5};
    int *ptr[5] , i;

    for(i = 0 ; i <= 4 ; i++)
    {
        ptr[i] = &arr[i];
        printf("\nSquare of Array Values :- %d",(*ptr[i]) * (*ptr[i]));
    }
    
    return 0;
}
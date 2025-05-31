#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int large = arr[0];

    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];
        }
    }

    printf("Largest Array Is %d ",large);
 
    return 0;
}
#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int large;

    for(int i = 0 ; i < arr[5] ; i++)
    {
        if(arr[i] > arr[5])
        {
            printf("Large element is %d",arr[5]);
        }
        else
        {
            printf("invalid");
        }

    }

    
    
    return 0;
}
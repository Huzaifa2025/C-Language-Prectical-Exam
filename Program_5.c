#include<stdio.h>

int main()
{
    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 6 - i  ; j <= 5 ; j++)
        {
            printf("%d  ",i*i);
        }  
        printf("\n\n");
    }
    return 0;
}
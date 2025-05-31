#include<stdio.h>

int main()
{
    int num;
    int length = 0 , i;
    int vowel = 1;


    printf("Enter Number :- ");
    scanf("%d",&num);

    for(i = 0 ; length != 0 ; i++)
    {
        length++;
    }

    for(i = 0 ; i < length / 2 ; i++)
    {
        if(length != length - 1 - i);
        {
            vowel = 0;
            break;
        }
    }

    if(vowel = 1)
    {
        printf("Vowel Number");
    }
    else if(vowel = 0)
    {
        printf("Consonant Number");
    }
    else
    {
        printf("Invalid");
    }
           
           
   

    return 0;
}
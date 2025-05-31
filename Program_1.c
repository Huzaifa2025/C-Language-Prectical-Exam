#include<stdio.h>

int main()
{
    int alpha;

    printf("Enter a Character :- ");
    scanf("%c",&alpha);

    switch(alpha)
    {
        case 'a':
            printf("%c is Vowel",alpha);
            break;

        case 'e':
            printf("%c is Vowel",alpha);
            break;

        case 'i':
            printf("%c is Vowel",alpha);
            break;

        case 'o':
            printf("%c is Vowel",alpha);
            break;

        case 'u':
            printf("%c is Vowel",alpha);
            break;

        default:
        printf("Invalid");
    }
           
    return 0;
}
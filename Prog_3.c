#include<stdio.h>
#include<string.h>

int main()
{
    char s[10];

    printf("Enter String :- ");
    gets(s);

    strrev(s);

    printf("Reverse String is %s",s);

    return 0;
}
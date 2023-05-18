#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input : ");
    printf("Output: ");
    //printf("%s\n", s);
    //printing the string inside string s without using s
    int i;
    for (i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    putchar('\n');
    //if i++ for the increment the value of i in the end is 5
    //if ++i for the increment, the value of i is still 5
    printf("%i\n", i);
}
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
    /*instead of keep calling strlen as for the for loop condition, we can
    call strlen one time and store the value in a variable!!*/
    int size = strlen(s);
    for (i = 0; i < size; i++)
    {
        printf("%c", s[i]);
    }
    putchar('\n');
    //if i++ for the increment the value of i in the end is 5
    //if ++i for the increment, the value of i is still 5
    printf("%i\n", i);
}
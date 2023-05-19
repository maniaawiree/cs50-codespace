#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input : ");
    printf("Output: ");
    //printf("%s\n", s);
    //printing the string inside string s without using s
    /*instead of keep calling strlen as for the for loop condition, we can
    call strlen one time and store the value in a variable!!*/
    for (int i = 0, size = strlen(s); i < size; i++)
    {
            printf("%c", s[i]);
    }
    putchar('\n');

}
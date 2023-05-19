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
        //now to convert the characters from lower-case to upper-case?
        //the int value of every lower-case letter is 32 more than its upper-case
        if (s[i] >= 'a' && s[i] <= 'z') //checking if the element is in 'a-z' alphabetical range
        {
            printf("%c", s[i] - 32);
        }
        //so that other characters are printed the way they are without any changes
        else
        {
            printf("%c", s[i]);
        }

    }
    putchar('\n');

}
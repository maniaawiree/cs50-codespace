#include <stdio.h>
#include <cs50.h>


int main(void)
{
    //a string is an array of characters
    string s = "HI!";
    printf("%s\n", s);
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}
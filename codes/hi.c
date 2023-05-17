#include <stdio.h>
#include <cs50.h>


int main(void)
{
    //a string is an array of characters
    string s = "HI!";
    string t = "BYE!";

    printf("%s\n", s);
    printf("%s\n", t);
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
    printf("%i %i %i %i %i\n", t[0], t[1], t[2], t[3], t[4]);

}
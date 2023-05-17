#include <stdio.h>
#include <cs50.h>
#include <string.h>

//int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");

    // int i = 0;

    // while(name[i] != '\0')
    // {
    //     i++;
    // }
    // printf("%i\n", i);

    //int length = string_length(name);
    int length = strnlen(name, 6);
    printf("%i\n", length);

}

// int string_length(string s)
// {
//     int i = 0;

//     while(s[i] != '\0')
//     {
//         i++;
//     }
//     return i;
// }
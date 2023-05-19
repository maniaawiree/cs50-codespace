#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // if(argv[1] == NULL)
    // {
    //     printf("Please enter your name in the command line!!\n");
    // }
    // else
    // {
    //     printf("Hello, %s\n", argv[1]);

    // }

    if (argc == 2) //checks the number of a
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
    {
        printf("Hello, World!\n");
    }
}
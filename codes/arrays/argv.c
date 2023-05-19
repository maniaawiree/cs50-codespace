#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if(argv[1] == NULL)
    {
        printf("Please enter your name in the command line!!\n");
    }
    else
    {
        printf("Hello, %s\n", argv[1]);

    }
}
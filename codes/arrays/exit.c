#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2) //2 is the name of the program and one more word after that
    //like ./argv Mania so that's 2 words
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
    {
        printf("Hello, World!\n");
    }
}
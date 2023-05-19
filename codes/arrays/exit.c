#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2) //2 is the name of the program and one more word after that
    //like ./argv Mania so that's 2 words
    {
        printf("Missing command-line argument\n");
        return 1;
        \\this is a clue to the system that something went wrong!!
    }
    //the program will get to this point only if the if condition is false
        printf("Hello, %s!\n", argv[1]);
        return 0;
}
#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int size = 0;
    int scores[size];
    int stop = 0;
    int sum = 0 ;

    size = get_int("How many scores? ");

    for (int i = 0; i < size && stop == 0; i++)
    {
        scores[i] = get_int("Score: ");

    }

    //double count = sizeof(scores) / sizeof(scores[0]);

    for (int i = 0 ; i < size && scores[i] != 0; i++)
    {
        printf("%i\n", scores[i]);
        sum = scores[i] + sum;
    }
    //as long as one of the values participating in the arithmetic expression is something like a float
    //the rest will be treated/ promoted as floating value too
    printf("The average is %.2lf\n", (double)sum / size);

    return 0;

}
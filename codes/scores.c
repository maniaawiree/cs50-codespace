#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int size = 10;
    int scores[] = {73, 71, 33};
    int count = 0, sum = 0 ;
    count = sizeof(scores) / sizeof(scores[0]);
    for (int i = 0 ; i < count ; i++)
    {
        printf("%i\n", scores[i]);
        sum = scores[i] + sum;
    }
    //as long as one of the values participating in the arithmetic expression is something like a float
    //the rest will be treated/ promoted as floating value too
    printf("The average is %.2lf\n", (double)sum / count);

    return 0;

}
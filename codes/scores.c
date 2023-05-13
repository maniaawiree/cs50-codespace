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

    printf("The average is %.2i\n", sum / count);

    return 0;

}
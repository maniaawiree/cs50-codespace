#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int size = 10;
    int scores[] = {73, 71, 33};
    int count = 0;
    double sum =0 ;

    for (int i = 0; i < 10 && scores[i] != 0; i++)
    {
        sum = scores[i] + sum;
        count++;
    }

    printf("The average is %.2lf\n", sum / count);

    return 0;

}
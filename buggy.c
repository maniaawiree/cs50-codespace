#include <stdio.h>
#include <cs50.h>

int get_int_negative(void);

int main(void)
{
    int n = get_int_negative();

    return 0;
}

int get_int_negative(void)
{
    int n;
    do
    {
        n = get_int("Negative Integer: ");
    }
    while (n > 0);

    return n;

}
#include<stdio.h>
int main()
{
    int i = 0;
    int sum = 0;
    while (i < 10)
    {
        sum += 1;
        i++;
    }
    printf("Sum: %d", sum);

    return 0;
}
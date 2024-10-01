#include <stdio.h>

int main()
{
    int n, i;
    i = 1;
    printf("enter you no.");
    scanf("%d", &n);
    do
    {
        if (i < n)
        {
            printf("%d\n", i);
        }
        else if (i = n)
        {
            printf("%d", i);
        }
        ++i;

    } while (i < n + 1);                       

    return 0;
}
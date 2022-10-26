#include <stdio.h>

int main(void)
{
    int a[] = {1,2,3,4,5};
    int i, temp;
    int n = sizeof(int);
    for (i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf("%ls\n", a);
}
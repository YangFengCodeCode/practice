#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d %d %d", &a, &b, &c);
    if (a < b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (a < c)
    {
        int tmp = a;
        a = c;
        tmp = c;
    }
    if (b < c)
    {
        int tmp = b;
        b = c;
        tmp = c;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}
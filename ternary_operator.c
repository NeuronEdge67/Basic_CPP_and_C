# include <stdio.h>

int main(void)
{
    int x, y;

    x = 9;
    y = 1;

    y += x > 10? 17: 37;

    printf("x is equal to %d and y is equal to %d\n", x, y);
}

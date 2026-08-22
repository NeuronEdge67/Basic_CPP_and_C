# include <stdio.h>

int main(void)
{
    int x, y, i, j, a, b, w;

    x = 9;
    y = 1;
    i = 10;
    j = 5 + i++;
    y += x > 10? 17: 37;
    a = 10;
    b = 5 + ++b;

    printf("%d, %d\n", i, j);
    printf("%d, %d\n",a, b);
    printf("x is equal to %d and y is equal to %d\n", x, y);
    printf("The number %d is %s.\n", x, x % 2 == 0? "even": "odd");

for (w = 0; w < 10; w++) {
    printf("w is %d\n", w);
}

for (i = 0, j = 10; i < 100; i++, j++)
    printf("%d, %d\n", i, j);

w = 0;
while (w < 10) {
    w += 1;
    printf("%d\n", w);
}
}

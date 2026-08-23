# include <stdio.h>

int main(void)
{
    int i = 11, x;

    if (i == 69) {
        printf("I is %d", i);
    }

    else {
        printf("I is not 6. I is %d\n", i);
    }

    x = 0;

    while (x < 10){
        printf("x is %d now\n", x);
        x++;
    }
    printf("All done!\n");

    // y += x > 10? 17: 37;

    return 0;
}

# include <stdio.h>

int main(void)
{
    int a = 11, x, i;

    if (a == 69) {
        printf("I is %d", a);
    }

    else {
        printf("a is not 6. a is %d\n", a);
    }

    x = 0;

    while (x < 10){
        printf("x is %d now\n", x);
        x++;
    }
    printf("All done!\n");

    i = 10;
while(i < 10) {
printf("while: i is %d\n", i);
i++;
}
i = 10;
do {
printf("do-while: i is %d\n", i);
i++;
} while (i < 10);
printf("All done!\n");


    // y += x > 10? 17: 37;

    i = 10;
    while(i < 10) {
    printf("while: i is %d\n", i);
    i++;
    }
    do {
    i = 10;
    printf("do-while: i is %d\n", i);
    i++;
    } while (i < 10);
    printf("All done!\n");


    return 0;
}

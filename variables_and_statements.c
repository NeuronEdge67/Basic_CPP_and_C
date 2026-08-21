# include <stdio.h>
# include <stdbool.h>

int main(void)
{
    int i = 67;
    float f = 3.14;
    char *s = "Hello";
    bool x = true;

    if (x){
        printf("x is true\n");
    }

    printf("%s %d %f", s, i, f);
}
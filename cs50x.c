# include <stdio.h>

int main(void)
{
    int x = get_int("What's X? ")
    int y = get_int("What's Y? ")

    if (x > y)
    {
        printf("X is grater than Y");
    }

    else if (x < y)
    {
        printf("X is smaller than Y");
    }

    else (x == y)
    {
        printf("X is equal to Y");
    }
}


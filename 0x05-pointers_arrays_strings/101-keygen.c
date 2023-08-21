#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, sum, target;
    char password[84];
    char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    srand(time(NULL));

    target = 2772;
    sum = 0;

    for (i = 0; i < 83; i++)
    {
        password[i] = valid_chars[rand() % 62];
        sum += password[i];
    }

    password[i] = target - sum;

    printf("%s", password);

    return 0;
}

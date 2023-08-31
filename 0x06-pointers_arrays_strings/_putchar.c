#include <unistd.h>

/* Function to write a character to stdout */
int _putchar(char c) {
    return write(1, &c, 1);
}

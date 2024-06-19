// main.h

#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

#endif /* MAIN_H */

// main.c

#include <stdio.h>
#include "main.h"

int main() {
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');
    return 0;
}

int _putchar(char c) {
    return putchar(c);
}


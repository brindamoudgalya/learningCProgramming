
/* this C file is for doing problems */

#include <stdio.h> // preprocessor command, tells processor what to include

int main() {

    int a; float b; int c;
    a = 25; b = 3.24; c = a + b * b - 34;

    printf("%d, %f, %d", a, b, c);

    return 0; // return 0 if successful run, 1 if unsuccessful (or a non-zero number)
}
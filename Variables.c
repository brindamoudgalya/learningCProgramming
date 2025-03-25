#include <stdio.h>
#include <stdbool.h>

int main() {
    int x; // declaration
    x = 5; // initialization
    int age = 19; // declaration + initialization - %d
    float gpa = 3.9; // floating point number (4 bytes of memory) - %f
    double d = 1; // double (8 bytes of memory) - %lf (long float)
    char grade = 'A'; // single character - %c
    char name[] = "Brinda"; // array of characters = string (bc string is an object, C != OOP) - %s


    bool e = true; // boolean (1 byte of memory)
    char f = 120; // char is 1 byte (-128 to +127), can use %d or %c
    unsigned char g = 255; // unsigned char is 1 byte, but only positive (0 to +255 range), %d or %c

    const int THREE = 3; // "const" means we can't re-initialize the constant variable later
    // so "THREE = 5" would throw an error!!! yayayay.

    

    printf("Hi, %s!\n", name); // "%" is format specifier
    printf("You are %d years old.\n", age);
    printf("Your grade is %c.\n", grade);
    printf("Your GPA is %f.\n", gpa);
    printf("AKA, your GPA is a %.2f.\n", gpa);

    printf("************************\n");

    

    printf("Char as decimal: %d\n", f);
    printf("Char as char: %c\n", f);
    printf("Char as char pt. 2: %c\n", f-1);
    
    char ch_c = 'c';
    char ch_d = 'd';

    printf("************************\n");
    printf("%d %d\n", ch_c, ch_d);
    printf("%d %c\n", ch_c, ch_d);
    printf("%c %d\n", ch_c, ch_d);
    printf("%c %c\n", ch_c, ch_d);
    printf("%-5.2dlol!\n%.1d", ch_c, ch_d);

    return 0;
}
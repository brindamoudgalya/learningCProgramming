
/* this C file is for doing problems */

#include <stdio.h> // preprocessor command, tells processor what to include
#include <math.h>

int main() {

    // given 5-digit integer, reverse the number and see if the two numbers are equal
    int num;
    printf("Input number: ");
    scanf("%d", &num);

    int d1 = num/10000;
    num = num % 10000;
    int d2 = num/1000;
    num = num % 1000;
    int d3 = num/100;
    num = num % 100;
    int d4 = num/10;
    num = num % 10;
    int d5 = num;

    int rev_num = d5*10000 + d4*1000 + d3*100 + d2*10 + d1;
    num = d1*10000 + d2*1000 + d3*100 + d4*10 + d5;


    if (num == rev_num) {
        printf("Equal");
    } else {
        printf("Not equal");
    }

    return 0; // return 0 if successful run, 1 if unsuccessful (or a non-zero number)
}
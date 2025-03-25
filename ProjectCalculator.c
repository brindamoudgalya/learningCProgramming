#include <stdio.h>

// Building a VERY SIMPLE calculator to recap things for myself

int main() {

    printf("Enter two numbers you would like to perform an operation on.\n");
    printf("Please hit enter after typing each number. \n");

    int numOne;
    int numTwo;

    scanf("%d", &numOne);
    scanf("%d", &numTwo);

    printf("What operation would you like to perform on these two numbers? \n");
    
    char oper;
    scanf(" %c", &oper); // btw the "_%c" whitespace is to account for the \n pressed by the user...
    //... after entering the second number (numTwo). without this whitespace, program crashes !!

    if (oper == '+') {
        printf("%d", numOne + numTwo);
    } else if (oper == '-'){
        printf("%d", numOne - numTwo);
    } else if (oper == '*') {
        printf("%d", numOne * numTwo);
    } else if (oper == '/') {
        printf("%d", numOne / numTwo);
    } else {
        printf("Sorry, that operation is not not possible right now.");
    }
    
    

    return 0;
}
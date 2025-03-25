#include <stdio.h>

int main(){

    int age;
    printf("How old are you?\n");
    scanf("%d", &age);                      // scanf only scans up to the first whitespace
    printf("You are %d years old!\n", age);


    char name[25]; // 25 bytes
    // since name can contain whitespace ("Brinda Moudgalya"), can't use scanf
    // we use fgets(variable_name, input_size, stdin);
    fgets(name, 25, stdin);


    return 0;
}
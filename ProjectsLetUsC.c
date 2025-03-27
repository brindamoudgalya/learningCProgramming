
# include <stdio.h>

void problem1_2() {
    // calculate the distance between two cities in m, ft, in, cm (it'll be given in km)

    float dist;
    float met, ft, in, cm;

    printf("Enter the distance in km: ");
    scanf("%f", &dist);

    // perform calculations:
    met = dist * 1000;
    cm = met * 100;
    in = cm / 2.54;
    ft = in / 12;

    printf("The distance in different units are as follows:\n");
    printf("%f meters, %f feet, %f inches, %f centimeters", met, ft, in, cm);

}

void problem1_1() {
    // calculate gross pay, given that:
    // dearness allowance is 40% of basic salary, house rent allowance is 20% of basic salary

    float basic, dearness, rent, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    dearness = basic * 0.4;
    rent = basic * 0.2;

    gross = basic + dearness + rent;

    printf("Gross pay: %f", gross);

}

int main() {

    problem1_2();
    // problem1_1();

    return 0;
}
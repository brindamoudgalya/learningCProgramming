
# include <stdio.h>
#include <math.h>

void exercise_d_a_ch4() {
    // rgb to cmyk scale

    int r, g, b;
    printf("Specify values of R, G, and B separated by a space. ");
    scanf("%d %d %d", &r, &g, &b);

    float white, cyan, magenta, yellow, black;

    if (r == g && r == b && r == 0) {
        cyan = magenta = yellow = 0;
        black = 1;
    } else {
        if (r >= g && r >= b) {
            white = r/255;
        } else if (g >= r && g >= b) {
            white = g/255;
        } else if (b >= r && b >= g) {
            white = b/255;
        }
        cyan = (white-r/255)/white;
        magenta = (white-g/255)/white;
        yellow = (white-b/255)/white;
        black = 1-white;
    }


    printf("%d %d %d %d", (int)cyan, (int)magenta, (int)yellow, (int)black);

}

void problem4_1() {
    // given a year as input, check whether it is a leap year or not
    int year;
    printf("Give a year: ");
    scanf("%d", &year);

    // logic: if the year is divisible by 400 it's a leap year
    // OR if the year is divisible by 4 and not by 100 it's a leap year
    if (year%400==0 || (year%4==0 && !(year%100==0))) {
        printf("Leap year");
    } else {
        printf("Not a leap year");
    }

}

void problem3_1() {
    // if buying & selling price of an item is input by user, determine how much profit/loss seller made

    float cost, sell_p;
    printf("Give the cost of the item: ");
    scanf(" %f", &cost);
    printf("Give the price you want to sell at: ");
    scanf(" %f", &sell_p);

    if(cost > sell_p) {
        printf("You have incurred loss. You lost $%f.", (cost-sell_p));
    } else if (sell_p > cost) {
        printf("You have made profit! You made $%f.", (sell_p-cost));
    } else {
        printf("You broke even.");
    }
}

void problem2_3() {
    // compute smallest number of notes that will combine to give N rupees/dollars
    // given denominations of Rs/$ are 1, 2, 5, 10, 50, and 100

    int n;
    printf("Enter the number of dollars you want to break down: ");
    scanf(" %d", &n);

    int d1, d2, d5, d10, d50, d100;
    d100 = n/100;
    n = n%100;
    d50 = n/50;
    n = n%50;
    d10 = n/10;
    n = n%10;
    d5 = n/5;
    n = n%5;
    d2 = n/2;
    n = n%2;
    d1 = n;
    printf("You can break this into %d $100 bills, %d $50 bills, %d $10 bills, ", d100, d50, d10);
    printf("%d $5 bills, %d $2 bills, and %d $1 bills.", d5, d2, d1);
    printf("\nThat's a total of %d bills.", d1+d2+d5+d10+d50+d100);
}

void problem2_2() {
    // given a 5-digit number (user input), reverse the number

    int num;
    printf("Please enter a five-digit number: ");
    scanf(" %d", &num);

    int rev1, rev2, rev3, rev4, rev5;
    rev5 = num/10000;
    num = num % 10000;
    rev4 = num/1000;
    num = num % 1000;
    rev3 = num/100;
    num = num % 100;
    rev2 = num/10;
    num = num % 10;
    rev1 = num;

    printf("Your reversed number is: %i%i%i%i%i", rev1, rev2, rev3, rev4, rev5);

}

void problem2_1() {
    // find the area of a triangle given its three side lengths
    // area = sqrt(s(s-a)(s-b)(s-c)) given s = (a+b+c)/2

    float a, b, c;

    printf("Enter three side lengths: ");
    scanf(" %f %f %f", &a, &b, &c);

    float s = (a+b+c)/2;
    float area = sqrtf(s * (s-a) * (s-b) * (s-c));

    printf("The area is: %f", area);
    
}

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

    exercise_d_a_ch4();

    return 0;
}
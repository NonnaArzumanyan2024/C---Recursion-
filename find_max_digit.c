#include <stdio.h>

int Find_Max_Digit(int n) {
    if (n < 10) {
        return n;
    } else {
        int last_digit = n % 10;
        int max_of_rest = Find_Max_Digit(n / 10);
        if (last_digit > max_of_rest) {
            return last_digit;
        } else {
            return max_of_rest;
        }
    }
}

int main() {
    int num = 0;
    printf("Please enter a rational number.: ");
    scanf("%d", &num);
    printf("The largest digit of a number is %d\n", Find_Max_Digit(num));
    return 0;
}
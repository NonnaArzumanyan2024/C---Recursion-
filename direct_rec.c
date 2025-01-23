//direct recursion function

#include <stdio.h>

int fact (int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * fact(n -1);
    }
}

int main () {
    int n = 0;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("%d factorial = %d\n", n, fact(n));
    return 0;
}
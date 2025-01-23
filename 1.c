//simple recursive code

#include <stdio.h>

int fun (int n) {
    if (n == 1) {
        return 1;
    } else {
        return 1 + fun(n-1);
    }
}

int main () {
    int n = 0;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("fun = %d\n", fun(n));
    return 0;
}
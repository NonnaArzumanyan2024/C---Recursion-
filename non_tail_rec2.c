// non-tail recursive function

#include <stdio.h>

int fun (int n) {
    if (n == 1) {
        return 0;
    } else {
        return 1 + fun(n / 2);
    }
}

int main () {
    int n = 0;
    printf("Please enter a number: ");
    scanf("%d", &n);
    printf("%d\n", fun(n));
    return 0;
}
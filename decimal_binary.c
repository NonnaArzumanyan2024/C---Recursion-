#include <stdio.h>

void fun (int n) {
    if (n == 0) {
        return;
    } else {
        fun (n / 2);
        printf("%d", n % 2);
    }
}

int main () {
    int n = 0;
    printf("Please enter a number: ");
    scanf("%d", &n);
    fun(n);
    printf("\n");
    return 0;
}
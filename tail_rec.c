//tail recursive function

#include <stdio.h>

void fun (int n) {
    if (n == 0) {
        return;
    } else {
        printf("%d ", n);
        return fun(n - 1);
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
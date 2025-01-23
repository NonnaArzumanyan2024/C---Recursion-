// non-tail recursive function

#include <stdio.h>

void fun (int n) {
    if (n == 0) {
        return;
    } else {
        fun(n - 1);
        printf("%d ", n);
    }
}

int main () {
    int n = 0;
    printf("Please enter number: ");
    scanf("%d", &n);
    fun(n);
    printf("\n");
    return 0;
}
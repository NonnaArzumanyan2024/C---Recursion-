#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;  
    } else {
        return gcd(b, a % b);  
    }
}

int main() {
    int a = 0;
    int b = 0;
    printf("Please enter two positive numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("The greatest common divisor of %d and %d is %d\n", a, b, gcd(a, b));
    
    return 0;
}

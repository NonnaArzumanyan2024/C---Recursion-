#include <stdio.h>

int sum_of_divisors(int num, int divisor) {
    if (divisor == 0) {
        return 0; 
    } else if (num % divisor == 0) {
        return divisor + sum_of_divisors(num, divisor - 1); 
    } else {
        return sum_of_divisors(num, divisor - 1); 
    }
}

int main() {
    int num = 0;
    printf("Please enter a positive number.\n");
    scanf("%d", &num);
        
    printf("The sum of all divisiors of %d is %d\n", num, sum_of_divisors(num, num)); 
    
    return 0;
}

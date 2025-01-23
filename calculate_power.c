#include <stdio.h>

int calculate_power(int num, int power) {
    if (power == 0) { 
        return 1; 
    } else {
        return num * calculate_power(num, power - 1); 
    }
}

int main() {
    int num = 0;
    printf("Enter the base number: ");
    scanf("%d", &num);
    
    int power = 0;
    printf("Enter the power: ");
    scanf("%d", &power);
    
    int result = calculate_power(num, power);
    printf("%d ^ %d = %d\n", num, power, result);
    
    return 0;
}

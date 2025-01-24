#include <stdio.h>

void print_in_base(int num, int base) {
    if (num == 0) {
        return;  
    } else {
        print_in_base(num / base, base); 
        printf("%d", num % base); 
        //if we write the function call after printing, we will get the base representation of the number in reverse order
        
    }
}

int main() {
    int num = 0;
    printf("Please enter the number: ");
    scanf("%d", &num);
    
    int base = 0;
    printf("Please enter the base: ");
    scanf("%d", &base);
    
    if (num == 0) {
        printf("0");
    } else {
        printf("The number in base %d is: ", base);
        print_in_base(num, base);
    }  
    printf("\n");

    return 0;
}

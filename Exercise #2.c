#include <stdio.h>

int main(void) {
    int Val1, Val2, D;
    int divisibleC = 0;

    printf("Enter the start value (Val1): ");
    scanf("%d", &Val1);
    printf("Enter the end value (Val2): ");
    scanf("%d", &Val2);
    printf("Enter the divisor (D): ");
    scanf("%d", &D);

    if (D==0) {
        printf("\nYou cannot divide anything by 0!!\n");
        return 0;
    }

    printf("Numbers divisible by %d between %d and %d are: ", D, Val1, Val2);

    for (int i = Val1; i <= Val2; i++) {
        if (i % D == 0) {
            printf("%d ", i);
            divisibleC++;    
        }
    }

    printf("\nTotal count of numbers divisible by %d: %d\n", D, divisibleC);
}
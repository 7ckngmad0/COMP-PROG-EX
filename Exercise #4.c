#include <stdio.h>

int main(void)
{
    int non_negative_number, i, j, prime;

    printf("Enter a non-negative number: ");
    scanf("%d", &non_negative_number);

    printf("The factors of %d are: ", non_negative_number);

    for (i = 1; i <= non_negative_number; i++)
    { 
        if(non_negative_number % i == 0)
        {
            prime = 1;
            for (j=2; j <= i/2; j++)
            {
                if(i % j == 0)
                {
                    prime = 0;
                    break;
                }
            }

            if (prime == 1)
            {
                printf("%d, ", i);
            }
        }
    }
}
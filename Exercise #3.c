#include <stdio.h>

int main(void) {
    int DL;
    char Type;
    float fine = 0.0;

    printf("Enter the number of days late: ");
    scanf("%d", &DL);

    if (DL == 0) {
        printf("No fine\n");
        return 0;
    }

    printf("Enter the type (C for CD, V for VHS): ");
    scanf(" %c", &Type);

    if (DL <= 2) 
    {
        fine = 10.00;
    } 
    else if (DL <= 4) 
    {
        fine = 15.00;
    } 
    else if (DL <= 5) 
    {
        fine = 20.00;
    } 
    else 
    {
        if (Type == 'C' || Type == 'c') 
        {
            fine = 50.00;
        } 
        else if (Type == 'V' || Type == 'v') 
        {
            fine = 35.00;
        } else 
        {
            printf("You input an invalid media type, bruh!\n");
            return 1;
        }
    }

    printf("The fine that you need to pay is: $%.2f\n", fine);
}
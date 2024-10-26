#include<stdio.h>

int main(void)
{
    int height;
    int age;
    int citizenship;
    int recommendee;

    printf("Enter your height (in cm): ");
    scanf("%d", &height);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Are you a citizen of the Planet Endor (1 for citizen, 0 for not citizen): ");
    scanf("%d", &citizenship);
    
    printf("Are you recommended by Jedi Master Obi Wan (1 for recommended, 0 for not recommended): ");
    scanf("%d", &recommendee);

    if (height >= 200 && age >= 21 && age <= 25 && citizenship == 1) 
    {
        printf("Applicant is accepted. Welcome to the  Jedi Knight Academy!\n");
    } 
    else if (recommendee == 1)
    {
        printf("So, you're recommended by Jedi Master Obi Wan huh, you're accepted!\n");
    } 
    else 
    {
        printf("Applicant is rejected.\n");
    }
}
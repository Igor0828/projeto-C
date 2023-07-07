#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
    // Get the user's age.
    int age;
    
    printf("Enter your age:\n");
    scanf("%i",&age);
    if (age >= 18) {
        printf("You are over 18 years old.\n");
    } else {
        printf("You are under 18 years old.\n");
    }

    return 0;
}

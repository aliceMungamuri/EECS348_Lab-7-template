#include "football.h"
#include <stdio.h>

int main() {
    int score;

    while (1) {
        printf("Enter the NFL score (0 or 1 to STOP): ");
        scanf("%d", &score);

        if (score <= 1) {
            printf("Exiting program.\n");
            break;
        }

        print_combinations(score);
    }

    return 0;
}

#include "football.h"
#include <stdio.h>


/* These are the diff scoring plays - respectively touchdowns, 6 7 and 8 a safety and then a field goal*/

#define Touchdown6 6
#define Fieldgoal3 3
#define Safety2 2
#define Touchdown7 7 
#define Touchdown8 8 

void print_combinations(int points) {
    printf("Possible combinations of scoring plays if a team’s score is %d:\n", points);

    for (int td8 = 0; td8 * Touchdown8 <= points; td8++) {
        for (int td7 = 0; td7 * Touchdown7 + td8 * Touchdown8 <= points; td7++) {
            for (int td6 = 0; td6 * Touchdown6 + td7 * Touchdown7 + td8 * Touchdown8 <= points; td6++) {
                for (int fg = 0; fg * Fieldgoal3 + td6 * Touchdown6 + td7 * Touchdown7 + td8 * Touchdown8 <= points; fg++) {
                    for (int safety = 0; safety * Safety2 + fg * Fieldgoal3 + td6 * Touchdown6 + td7 * Touchdown7 + td8 * Touchdown8 <= points; safety++) {
                        if (td8 * Touchdown8 + td7 * Touchdown7 + td6 * Touchdown6 + fg * Fieldgoal3 + safety * Safety2 == points) {
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",
                                   td8, td7, td6, fg, safety);
                        }
                    }
                }
            }
        }
    }
}

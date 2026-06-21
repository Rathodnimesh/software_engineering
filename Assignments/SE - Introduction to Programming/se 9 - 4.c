#include <stdio.h>

int main() {
    // Example: 3 matches, 2 teams per match
    int cricketScores[3][2] = {
        {180, 175},   // Match 1
        {200, 210},   // Match 2
        {150, 160}    // Match 3
    };

    printf("Highest score from each match:\n");
      int i,j;
    // Loop through each match (row)
    for ( i = 0; i < 3; i++) {
        int max = cricketScores[i][0]; // assume first team is highest

        // Compare with other teams in same match
        for ( j = 1; j < 2; j++) {
            if (cricketScores[i][j] > max) {
                max = cricketScores[i][j];
            }
        }

        printf("Match %d: %d\n", i + 1, max);
    }

    return 0;
}

#include <stdio.h>


void incrementFollowers (int *followers, int n) {
	int i;
    for(int i = 0; i < n; i++) {
        *(followers + i) = *(followers + i) + 100;  // pointer arithmetic
    }
}

int main() {
    int followers[5] = {1200, 850, 4300, 2750, 990};
    int i;
    
    incrementFollowers(followers, 5);
                                  
    // Print updated follower counts
    printf("Updated Followers Count:\n\n");
    for(int i = 0; i < 5; i++) {
        printf("Friend %d: %d followers\n", i + 1, followers[i]);
    }

    return 0;
}

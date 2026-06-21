#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to convert string to lowercase
void toLowerCase(char str[]) {
	int i;
    for(i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    FILE *fp;
    char line[100], temp[100];

    fp = fopen("playlist.txt", "r");

    if(fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("Songs containing 'love':\n\n");

    while(fgets(line, sizeof(line), fp) != NULL) {
        strcpy(temp, line);      // copy original line
        toLowerCase(temp);       // convert to lowercase

        // check if "love" exists
        if(strstr(temp, "love") != NULL) {
            printf("%s", line);  // print original line
        }
    }

    fclose(fp);
    return 0;
}

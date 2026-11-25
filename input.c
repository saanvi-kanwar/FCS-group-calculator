#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "input.h"

int getIntInput(const char message[]) {
    char input[100];
    char *end;

    int number;

    while (1) {
        printf("%s", message);

        if (fgets(input, sizeof(input), stdin) == NULL) {
            return 0;
        }

        number = strtol(input, &end, 10);

        while (isspace((unsigned char)*end)) {
            end++;
        }

        if (end != input && *end == '\0') {
            return number;
        }

        printf("Invalid input! Please enter an integer.\n");
    }
}
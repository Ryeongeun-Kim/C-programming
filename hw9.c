#include <stdio.h>

void convCase(char *str) {
    const int diff = 'a' - 'A';
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + diff;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - diff;
        }
    }
}

int main(void) {
    char input[1000];
    printf("Input> ");
    fgets(input, sizeof(input), stdin);
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
    }
    convCase(input);
    printf("Output> %s\n", input);
    return 0;
}

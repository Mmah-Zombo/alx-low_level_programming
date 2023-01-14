#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char username[32];
    int i;
    int key = 0;

    if (argc != 2) {
        printf("Usage: %s username\n", argv[0]);
        return 1;
    }

    strcpy(username, argv[1]);

    for (i = 0; i < strlen(username); i++) {
        key += username[i];
    }
    key *= 7;
    key -= 2;

    printf("Key for username %s: %d\n", username, key);

    return 0;
}

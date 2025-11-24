#include <stdio.h>

int main() {
    char str[] = "Hello!";
    char *p = str;        // p points to the first character

    printf("Characters\n");
    while (*p != '\0') {  // stop at null terminator
        printf("%c", *p);
        p++;              // increment pointer to next character
    }

    return 0;
}

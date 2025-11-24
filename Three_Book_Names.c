#include <stdio.h>

int main() {
    char book1[50], book2[50], book3[50];
    char *books[3] = { book1, book2, book3 };

    printf("Enter 3 Book Names:\n");
    for (int i = 0; i < 3; i++) {
        gets(books[i]);   // reads full line including spaces
    }

    printf("\nYou Entered:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", books[i]);
    }

    return 0;
}

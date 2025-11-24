#include <stdio.h>

int main() {
    char fname[50], mname[50], lname[50];
    char *name[3] = { fname, mname, lname };

    printf("Enter Your Name as \n");
    for (int i = 0; i < 3; i++) {
        scanf("%s",name[i]);
    }

    printf("\nYou Entered:\n");
        printf("%c %c %s\n", fname[0], mname[0], lname);
    

    return 0;
}

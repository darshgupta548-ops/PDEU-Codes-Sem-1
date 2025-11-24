#include <Stdio.h>
struct Register {
    char name[100];
    int RNo;
    char city[100];
};

void main(){
    struct Register s[100];
   int count = 0;
   char choice;
    do{
        printf("Enter details of student %d\n", count+1);
        printf("Name: ");
        scanf("%s",s[count].name);
        printf("Roll.No: ");
        scanf("%d",&s[count].RNo);
        printf("City: ");
        scanf("%s",s[count].city);
        count++;
        printf("\nDo you want to add another student? (y/n): ");
        scanf(" %c", &choice);

    }
    while (choice == 'y' || choice == 'Y');

    FILE *fptr;

    fptr = fopen("First.txt","w");    
    for (int i = 0; i < count; i++) {
        fprintf(fptr, "\nStudent %d:\n", i + 1);
        fprintf(fptr, "Name : %s\n", s[i].name);
        fprintf(fptr, "Roll.No  : %d\n", s[i].RNo);
        fprintf(fptr, "City: %s\n", s[i].city);
    }
    fclose(fptr);
}
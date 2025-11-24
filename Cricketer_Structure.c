#include <stdio.h>

struct Record {
    char name[100];
    int Age;
    int Matches;
    int Average;
};

void main(){
   struct Record s[100];
   int count = 0;
   char choice;
    do{
        printf("Enter details of cricketer %d\n", count+1);
        printf("Name: ");
        scanf("%s",s[count].name);
        printf("Age: ");
        scanf("%d",&s[count].Age);
        printf("Test Matches Played: ");
        scanf("%d",&s[count].Matches);
        printf("Average Runs Scored: ");
        scanf("%d",&s[count].Average);
        count++;
        printf("\nDo you want to add another player? (y/n): ");
        scanf(" %c", &choice);

    }
    while (choice == 'y' || choice == 'Y');

    for(int i=0; i<count; i++){
        for(int j=0; j<count-1; j++){
            if(s[j].Average > s[j+1].Average){
                struct Record temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("\nCricketer %d:\n", i + 1);
        printf("Name : %s\n", s[i].name);
        printf("Age  : %d\n", s[i].Age);
        printf("Matches: %d\n", s[i].Matches);
        printf("Average: %d\n", s[i].Average);
    }

}
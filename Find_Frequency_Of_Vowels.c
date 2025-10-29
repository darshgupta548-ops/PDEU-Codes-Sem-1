#include <stdio.h>
#include <string.h>

void main() {
char s1[100],s2[100];
int count[5] = {0}; 
int total_vowels = 0;
printf("Enter String \n");
gets(s1);
for(int i=0; s1[i] != '\0'; i++){
    if(s1[i]>='A' && s1[i] <= 'Z'){
        s1[i] = s1[i] + 32; // Upper Case to lower case
    }
}
    for (int i = 0; s1[i] != '\0'; i++) {
        char c = s1[i];
        if (c == 'a') {
            count[0]++;
        } else if (c == 'e') {
            count[1]++;
        } else if (c == 'i') {
            count[2]++;
        } else if (c == 'o') {
            count[3]++;
        } else if (c == 'u') {
            count[4]++;
        }
    }

    total_vowels = count[0] + count[1] + count[2] + count[3] + count[4];

    printf("Total Vowels : %d\n", total_vowels);
    printf("Vowel 'A'/'a': %d\n", count[0]);
    printf("Vowel 'E'/'e': %d\n", count[1]);
    printf("Vowel 'I'/'i': %d\n", count[2]);
    printf("Vowel 'O'/'o': %d\n", count[3]);
    printf("Vowel 'U'/'u': %d\n", count[4]);
}

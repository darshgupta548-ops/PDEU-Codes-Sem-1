#include <stdio.h>
#include <string.h>

void main(){
char s1[100],s2[100];
printf("Enter String \n");
gets(s1);

for(int i=0; s1[i] != '\0'; i++){
    if(s1[i]>='A' && s1[i] <= 'Z'){
        s1[i] = s1[i] + 32; // Upper Case to lower case
    }
}
// We did to convert All characters in Lowercase so that Case sensitivity won't be an issue
strcpy(s2,s1);
strrev(s2);

int result = strcmp(s1,s2);

if (result == 0){
    printf("\nThe String is a Palindrome");
}
else{
    printf("\nThe String is not a Palindrome");
}

}
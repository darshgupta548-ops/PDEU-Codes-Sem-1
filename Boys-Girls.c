#include <stdio.h> // Assignment No.18
int main(){
    int b = 0, g = 0;
    char code;
    for(int i=1; i<=10; i++){
        printf("Enter B for Boy and G for Girl    ");
        scanf(" %c", &code); // SPACE AFTER %c
        if(code == 'B' || code == 'b'){
            b = b + 1;
        }        
        else if (code == 'G' || code == 'g'){
            g = g+1;
        }
        else {
            printf("Enter Boys/Girls Not anything else\n");
            break;
        }
    }
    printf("%d boys %d girls", b, g);
    return 0;
}
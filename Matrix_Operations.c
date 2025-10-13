#include <stdio.h>
void main(){

int a[10],i,index,pos=0,new_num;
char choice;
printf("Enter 5 Numbers\n");

for(i=0; i<5; i++){
    scanf("%d",&a[i]);
    pos++;
}

printf("What do you want to do with the matrix ?\nUse 'I' for insertion and 'D' for deletion\n");
scanf(" %c",&choice);    
switch(choice){
        case 'i':
        case 'I': 
            printf("Where do you want to insert ? \nUse 'B' for Beginning, 'E' for end and 'N' for any random index\n"); 
            scanf(" %c",&choice);
                switch(choice){
                    case 'B':
                    case 'b':
                        printf("Enter The Number to Insert In the Beginning \n");
                        scanf("%d",&new_num);
                        for (i = pos - 1; i >= 0; i--) {
                            a[i+1] = a[i];
                         }
                        a[0] = new_num;
                        for(i=0;i<pos+1;i++){
                            printf("%d\n",a[i]);
                        }
                        break;
                    case 'E':
                    case 'e':
                        printf("Enter The Number to Insert In the End \n");
                        scanf("%d",&new_num);
                        a[pos] = new_num;
                        for(i=0;i<pos+1;i++){
                            printf("%d\n",a[i]);
                        }
                        break;
                    case 'N':
                    case 'n':
                        printf("Enter the index to insert (Starting from Zero)\n");
                        scanf("%d",&index);
                        printf("Enter The Number to Insert At the Index \n");
                        scanf("%d",&new_num);
                        for (i = pos-1; i >= index; i--) {
                            a[i+1] = a[i];
                         }
                        a[index] = new_num;
                        for(i=0;i<pos+1;i++){
                            printf("%d\n",a[i]);
                        }
                        break;
                    default:
                        printf("Enter from Valid Options\n");
                }
            break;
        case 'd':
        case 'D': 
            printf("Where do you want to Delete ? \nUse 'B' for Beginning, 'E' for end and 'N' for any random index\n"); 
            scanf(" %c",&choice);
                switch(choice){
                    case 'B':
                    case 'b':
                        for(i=0; i<pos; i++){
                            a[i-1] = a[i];
                        }
                        pos--;
                        for(i=0;i<pos;i++){
                            printf("%d\n",a[i]);
                        }
                        break;
                    case 'E':
                    case 'e':
                        for(i=0;i<pos-1;i++){
                            printf("%d\n",a[i]);
                        }
                        break;
                    case 'N':
                    case 'n':
                        printf("Enter the index to delete (Starting from Zero)\n");
                        scanf("%d",&index);
                        for (i=index+1; i<pos; i++) {
                            a[i-1] = a[i];
                         }
                        pos--;
                        for(i=0;i<pos;i++){
                            printf("%d\n",a[i]);
                        }
                        break;
                    default:
                        printf("Enter from Valid Options\n");
                }
            break;
        default: printf("Enter I or D please");
    }
}
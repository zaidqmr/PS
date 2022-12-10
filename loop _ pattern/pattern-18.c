#include<stdio.h>
int main(){
    char *s;
    s = malloc(1024 * sizeof(char));
    printf("Enter the string: ");
    scanf("%[^\n]", s);
    for(int i=0;i<strlen(s);i++){
        for(int j=0;j<i;j++){
            printf("%c",46);
        }
        for(int j=i;j<strlen(s);j++){
            printf("%c",s[j]);
        }
        printf("\n");

    }
}

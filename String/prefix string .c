#include<stdio.h>
#include<string.h>
int main(){
    char s[25];
    printf("Enter the string: ");
    gets(s);
    int a = strlen(s);
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            printf("%c",s[j]);
        }
        printf("\n");
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            printf("%c",s[(a-1)-j]);
        }
        printf("\n");
    }
}

#include<stdio.h>
int main(){
    char *s;
    s=malloc(1024*sizeof(char));
    printf("Enter the string: ");
    scanf("%s",s);
    int c=0;
    while(s[c]!='\0'){
        c++;
    }
    for(int i=c-1;i>=0;i--){
        printf("%c",s[i]);
    }
}

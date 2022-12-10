#include<stdio.h>
int main(){
    char *s;
    s=malloc(1024*sizeof(char));
    printf("Enter the string: ");
    scanf("%[^\n]",s);
    int c=0,a=0;
    while((int)s[a]==32){
        a++;
    }

    for(int i=a;s[i]!='\0';i++){
        int a = s[i];
        if(s[i]==32){
            c++;
        }
    }
    printf("number of words: %d",c+1);

}

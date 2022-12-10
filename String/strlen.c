#include<stdio.h>
#include<string.h>
int main(){
    char *s;
    s=malloc(1024*sizeof(char));
    printf("Enter the string: ");
    scanf("%s",s);
    int c=0;
    while(s[c]!='\0') c++;
    printf("length of string: %d\n",c);
    for(int i=0,j=c-1;i<j;i++,j--){
        int t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
    puts(s);
}

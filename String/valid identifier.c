#include<stdio.h>
#include<string.h>
int main(){
    char s[25];
    printf("Enter the identifier: ");
    gets(s);
    int flag=0,i=0;
    if((s[0]=='_' ) || (s[0]>='A' && s[0]<='Z') || (s[0]>='a' && s[0]<='z')){
        i=1;
        while(s[i]!='\0'){
            if((s[i]=='_' )||(s[i]=='$')||(s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9')){
                i++;
            }
            else{
                flag = 1;
                break;
            }
        }
        if(flag==0 && i<=32) printf("Valid identifier");
        else printf("valid identifier");

    }
    else printf("Invalid identifier");

}

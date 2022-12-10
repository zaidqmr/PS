#include<stdio.h>
#include<string.h>
int main(){
    char *s1,*s2;
    int t=0;
    s1=malloc(1024*sizeof(char));
    s2=malloc(1024*sizeof(char));
    scanf("%s",s1);
    scanf("%s",s2);
    int a=strlen(s1);
    int b=strlen(s2);
    if(a==b){
        for(int i=0;i<a;i++){
            if(s1[i]!=s2[i]){
                t=1;
            }
        }
    }
    else{
        printf("NOT SAME");
    }
    if(t==0){
        printf("SAME");
    }
    else{
        printf("NOT SAME");
    }
}


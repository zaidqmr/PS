#include<stdio.h>
int arr[26];
int main(){
    char *s;
    s=malloc(1024*sizeof(char));
    printf("Enter the string: ");
    scanf("%[^\n]",s);
    for(int i=0;i<strlen(s);i++){
        arr[s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]!=0){
            printf("%c ",65+i);
        }
    }
    printf("\n");
    for(int i=0;i<26;i++){
        if(arr[i]!=0){
            printf("%d ",arr[i]);
        }
    }

}

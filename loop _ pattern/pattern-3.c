#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i = 65;i<65+n;i++){
        for(int j=65;j<i+1;j++){
            printf("%c",i);
        }
        printf("\n");
    }
}

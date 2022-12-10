#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        for(int j=65;j<i+66;j++){
            printf("%c",i+j);
        }
        printf("\n");
    }
}

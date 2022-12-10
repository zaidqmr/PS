#include<stdio.h>
int main(){
    printf("Enter the number: ");
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=0;j<i-1;j++){
            printf("%c",32);
        }
        for(int k=0;k<((n+1)-i);k++){
            printf("%c",42);
        }
        for(int p=0;p<(n-i);p++){
            printf("%c",42);
        }
        printf("\n");

    }
}

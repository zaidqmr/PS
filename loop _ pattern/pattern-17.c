#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<i+2;j++){
            printf("%d",j);
        }
        for(int j=i+1;j>1;j--){
            printf("%d",j-1);
        }
        printf("%c",32);
    }
}


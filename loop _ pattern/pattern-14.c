#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a=0;
    for(int i=0;i<n;i++){
        if(i==0 || i==n-1){
            for(int j=0;j<n;j++){
                printf("%c",42);
            }
        }
        else{
            for(int j=0;j<(n-2)-a;j++){
                printf("%c",32);
            }
            printf("%c",42);
            a=a+1;
        }
        printf("\n");

    }
}

#include<stdio.h>
int main(){
    int n=3;
    for(int a=1;a<n+1;a++){
        for(int b=1;b<a;b++){
            printf("%c",32);
        }
        for(int c=n+1-a;c>0;c--){
            printf("%c",42);
        }
        for(int d=(n+1)-(a+1);d>0;d--){
            printf("%c",42);
        }
        printf("\n");
    }
    for(int i=n-1;i>0;i--){
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

#include<stdio.h>
int main(){
    int n=3;
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
    for(int a=1;a<n;a++){
        for(int b=0;b<a;b++){
            printf("%c",32);
        }
        for(int c=n-a;c>0;c--){
            printf("%c",42);
        }
        for(int d=n-(a+1);d>0;d--){
            printf("%c",42);
        }
        printf("\n");
    }

}

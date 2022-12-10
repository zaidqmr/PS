#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("%d",n-(j));
        }
        for(int j=0;j<(2*(n-i)-1);j++){
            printf("%d",n-(i));
        }
        for(int j=(n+1)-(i);j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<(n-1)-i;j++){
            printf("%d",n-j);
        }
        for(int j=0;j<(2*(i)+1);j++){
            printf("%d",i+1);
        }
        for(int j=0;j<(n-1)-i;j++){
            printf("%d",(i+2)+j);
        }
        printf("\n");
    }
}

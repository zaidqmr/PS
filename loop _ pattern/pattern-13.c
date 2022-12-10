#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a=n;
    while(n>=0){
        printf("%d ",n);
        n=n-5;
    }
    while(n!=a){
        printf("%d ",n);
        n=n+5;
    }
    printf("%d",a);

}

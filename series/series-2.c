#include<stdio.h>
int fib(int n){
    int a=1;
    for(int i = n;i>0;i--){
        a=a*i;
    }
    return a;
}
int main(){
    int n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        sum=sum+(fib(i)/i);
    }
    printf("%d",sum);
}

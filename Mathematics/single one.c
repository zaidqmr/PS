#include<stdio.h>
int sumDigit(int n){
    int sum=0,a;
    while(n!=0){
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>9){
        printf("%d\n",n);
        n=sumDigit(n);
    }
    printf("%d",n);
}

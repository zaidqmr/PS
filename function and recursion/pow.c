#include<stdio.h>
int pow(int n,int a){
    if(a==0) return 1;
    else if(a==1) return n;
    else return n*pow(n,a-1);
}
int main(){
    int n,a;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the power: ");
    scanf("%d",&a);
    printf("%d",pow(n,a));
}

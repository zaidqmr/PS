#include<stdio.h>
#include<math.h>
int main(){
    long long n;
    int a,b,k;
    printf("Enter the A: ");
    scanf("%d",&a);
    printf("Enter the B: ");
    scanf("%d",&b);
    printf("Enter the K: ");
    scanf("%d",&k);
    n=pow(a,b);
    long long e  = n/pow(10,k-1);
    printf("%d",e%10);
}


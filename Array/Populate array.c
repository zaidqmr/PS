#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;){
        printf("%d ",i);
        i=i+2;
    }
    if(n%2==1) n=n-1;
    for(int i=n;i>0;){
        printf("%d ",i);
        i=i-2;
    }
    return 0;
}

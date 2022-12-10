#include<stdio.h>
int fac(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int p=0;p<n+1;p++){
        for(int i=0;i<=n-p;i++){
            printf(" ");
        }
        for(int i=p,j=0;i>=0;i--,j++){
            printf("%d ",fac(p)/(fac(j)*fac(p-j)));
        }
        printf("\n");
    }

}

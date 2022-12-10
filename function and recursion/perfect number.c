#include<stdio.h>
int perfect(int n){
    int sum=0;
    for(int i=1;i<(n/2)+1;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("%d is perfect number\n",sum);
    }
}
int main(){
    int a,b;
    printf("Enter the start,end number: ");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        perfect(i);
    }

}

#include<stdio.h>
int fib(int n){
    float a=1;
    for(int i = n;i>0;i--){
        a=a*i;
    }
    return a;
}
int main(){
    int n;
    float sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(float i=1;i<n;i++){
        float a=2*i+1;
        if((int)i%2==1){
            sum = sum - ((i+1)/fib(a));
        }
        else{
            sum = sum + ((i+1)/fib(a));
        }
    }
    printf("%f",sum+1);


}

#include<stdio.h>
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
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int x;
    printf("Enter the X: ");
    scanf("%d",&x);
    for(float i=1;i<n;i++){
        float a=2*i+1;
        if((int)i%2==1){
            sum=sum-(pow(x,a)/fib(a));
        }
        else{
            sum=sum+(pow(x,a)/fib(a));
        }


    }
    printf("%f",sum+1);
}

#include<stdio.h>
int noofdigit(long long n){
    int c=0;
    while(n!=0){
        c++;
        n=n/10;
    }
    return c;
}
int main(){
    long long n;
    int sum1=0,sum2=0;
    printf("Enter the number: ");
    scanf("%lld",&n);
    int a=noofdigit(n);

    if(a%2==1){
        int m = ((a)/2)+1;
        for(int i=1;i<a+1;i++){
            int b= n%10;
            if(i<m){
                sum1=sum1+b;
            }
            else if(i!=m){
                sum2=sum2+b;
            }
            n=n/10;
        }
    }
    else{
        printf("Invalid Number");
    }

    if(sum1==sum2){
        printf("Balanced String");
    }
    else{
        printf("Unbalanced String");
    }

}

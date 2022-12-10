#include<stdio.h>
#include<math.h>
int prime(int n){
    int sum=0,e=0;
    for(int i=2;i<pow(n,0.5)+1;i++){
        if(n%i==0){
            e=1;
            break;
        }
    }
    if(e==0 && n!=1){
        printf("%d\n",n);
    }
}
int main(){
    int a,b;
    printf("Enter the start,end number: ");
    scanf("%d %d",&a,&b);
    printf("Prime Number between(%d and %d)\n",a,b);
    for(int i=a;i<=b;i++){
        prime(i);
    }

}

#include<stdio.h>
int seive(int *arr){
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

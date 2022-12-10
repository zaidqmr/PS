#include<stdio.h>
int main(){
    int n,sum=0,a=1,b=2,c=3;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++,a++,b++,c++){
        sum = sum + (a*b*c);
    }
    printf("%d",sum);

}

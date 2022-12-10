#include<stdio.h>
#include<math.h>
int main(){
    int n,a=0,n1=0,b;

    printf("Enter the number: ");
    scanf("%d",&n);
    int c=n;
    while(n!=0){
        b=n%10;
        n1=n1*10+b;
        n=n/10;
    }
    if(c==n1){
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }
}

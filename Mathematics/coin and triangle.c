#include<stdio.h>
#define PI 3.142857
#define root 1.732
int main() {
    int n,c;
    printf("Enter the number of coins: ");
    scanf("%d",&n);
    printf("Enter the circumference of coin: ");
    scanf("%d",&c);
    int a=1;
    int b=n;
    while(b>0){
        b=b-a;
        a++;
    }

    if(b==0){
        float radius = c/(2*PI);
        printf("radius of coin: %f\n",radius);
        int side = (a-1)*(radius*2);
        if(n==1) printf("Area enclosed: 0");
        else{
            printf("Area enclosed: %f",(side*side*root)/4);
        }

    }
    else printf("%d",-1);

    return 0;
}

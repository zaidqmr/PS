#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the sides: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        if(a==b && b==c){
            printf("Equilateral Triangle");
        }
        else if(a==b || b==c || c==a){
            printf("Isosceles Triangle");
        }
        else{
            printf("Scales Triangle");
        }

    }
    else{
        printf("Triangle is not formed");
    }
    return 0;

}


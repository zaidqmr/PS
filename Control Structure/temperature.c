#include<stdio.h>
int main(){
    int t;
    printf("Enter the temperature: ");
    scanf("%d",&t);
    if(t<0){
        printf("Freezing Wheather");
    }
    else if(t>=0 && t<10){
        printf("Very Cold Wheather");
    }
    else if(t>=10 && t<20){
        printf("Cold Wheather");
    }
    else if(t>=20 && t<30){
        printf("Normal in Temperature");
    }
    else if(t>=30 && t<40){
        printf("Hot");
    }
    else{
        printf("Very Hot");
    }
}

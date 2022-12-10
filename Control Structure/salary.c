#include<stdio.h>
int main(){
    int bs,hra,da,allow,pf;
    char grade;
    printf("Enter the Grade(A,B,C): ");
    scanf("%c",&grade);
    printf("Enter the basic salary: ");
    scanf("%d",&bs);
    int a= grade;
    if(grade==65){
        allow = 1700;
    }
    else if(grade == 66){
        allow = 1500;
    }
    else{
        allow = 1300;
    }
    hra=0.2*bs;
    da=0.5*bs;
    pf=0.11*bs;
    int total_salary =bs+hra+da+allow-pf;
    printf("%d",total_salary);

}

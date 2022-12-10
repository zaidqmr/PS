#include<stdio.h>
int main(){
    for(int i=2;i<7;i++){
        for(int j=1;j<i;j++){
            printf("%d",j);
            if(j==5){
                printf("%d",6);
            }
        }
        for(int k=7-i;k>1;k--){
            printf("%c",32);

        }
        if(i!=6){
            printf("%c",32);
        }

        for(int k=7-i;k>1;k--){
            printf("%c",32);
        }
        for(int j=1;j<i;j++){
            printf("%d",i-j);
        }
        printf("\n");
    }
}

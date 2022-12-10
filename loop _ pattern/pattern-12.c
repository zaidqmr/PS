#include<stdio.h>
int main(){
    for(int i=2;i<7;i++){
        for(int j=1;j<=(7-i);j++){
            printf("%d ",j);
            if(i==2 && j==5){
                printf("%d ",6);
            }
        }
        for(int k=2;k<i;k++){
            printf("%c ",32);
        }
        if(i!=2){
            printf("%c ",32);
        }
        for(int k=2;k<i;k++){
            printf("%c ",32);
        }
        for(int j=1;j<=(7-i);j++){
            printf("%d ",(8-i)-j);
        }
        printf("\n");
    }
}

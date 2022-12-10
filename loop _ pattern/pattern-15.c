#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int M[30][30]={0};
    M[0][0]=1;
    for(int i=1;i<n;i++){
        int j=0,c=1,a=0,b=1;
        while(M[i-1][j]!=0){
            if(M[i-1][j]==M[i-1][j+1]){
                c++;
            }
            else{
                M[i][a]=c;
                M[i][b]=M[i-1][j];
                c=1;
                a=a+2;
                b=b+2;
            }
            j++;
        }
    }
    for(int j=0;M[n-1][j]!=0;j++){
        printf("%d",M[n-1][j]);
    }
}

#include<stdio.h>
int main(){
    int m,n;
    int **arr1;
    printf("Matrix-1:\n");
    printf("Enter the numbers of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    arr1=malloc(m*sizeof(int*));
    for(int i=0;i<m;i++){
        arr1[i]=malloc(n*sizeof(int));
    }
    printf("Enter the elements: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    int sum1=0,sum2=0,sum3=0,sum4=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum1=sum1+arr1[i][j];
            sum2=sum2+arr1[j][i];
            if(i==j){
                sum3=sum3+arr1[i][j];
            }
            if(i+j==(m-1)){
                sum4=sum4+arr1[i][j];
            }
        }
    }
    int s1=sum1/5;
    int s2=sum2/5;
    if(s1==s2 && s2==sum3 && sum3==sum4 && sum4==s1){
        printf("It is a magic matrix.");
    }
    else{
        printf("It is a not a magic matrix.");
    }
}


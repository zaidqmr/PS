#include<stdio.h>
int main(){
    int n,*arr;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    arr=malloc(n*sizeof(int));
    printf("Enter the Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;){
        int t  = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = t;
        i=i+2;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

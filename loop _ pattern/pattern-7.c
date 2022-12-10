int main(){
    printf("Enter the number: ");
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=0;j<i-1;j++){
            printf("%c",32);
        }
        for(int k=0;k<((n+1)-i);k++){
            printf("%d",((n+1)-i)-k);
        }
        for(int p=0;p<(n-i);p++){
            printf("%d",p+2);
        }
        printf("\n");
    }
}

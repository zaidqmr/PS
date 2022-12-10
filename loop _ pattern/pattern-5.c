int main(){
    printf("Enter the number: ");
    int n;
    scanf("%d",&n);
    int k=1;
    for(int i =n;i>0;i--){
        for(int j = 0;j<k;j++){
            printf("%c",i+j+64);

        }
        k++;
        printf("\n");
    }
}

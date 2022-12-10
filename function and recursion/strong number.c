int fac(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}
int strong(int n){
    int sum=0;
    int b=n;
    while(n!=0){
        int a=n%10;
        sum=sum+fac(a);
        n=n/10;
    }
    if(b==sum){
        printf("%d\n",sum);
    }

}
int main(){
    int n,m;
    printf("Enter the start number: ");
    scanf("%d",&n);
    printf("Enter the end number: ");
    scanf("%d",&m);
    for(int i=n;i<m;i++){
        strong(i);
    }

}

int main(){
    char *s;
    s=malloc(1024*sizeof(char));
    printf("Enter the string: ");
    scanf("%s",s);
    int c=0;
    while(s[c]!='\0'){
        c++;
    }
    int t=1;
    for(int j=0,i=c-1;i>j;i--,j++){
        if(s[i]!=s[j]){
            t=0;
            break;
        }
    }
    if(t==1){
        printf("String is palindrome.");
    }
    else{
        printf("String is not palindrome.");
    }
}

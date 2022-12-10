#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    char **arr,t[25];
    arr = malloc(n*sizeof(char*));
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++){
        arr[i] = malloc(100*sizeof(char));
        scanf("%s",arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(strcmp(arr[i],arr[j])<0){
                strcpy(t, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], t);
            }
        }
    }
    printf("-----------------------------\nSorted Elements are:\n");
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}

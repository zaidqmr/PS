#include<stdio.h>
int main(){
    int d,m,y;
    printf("Enter the day: ");
    scanf("%d",&d);
    printf("Enter the month: ");
    scanf("%d",&m);
    printf("Enter the year: ");
    scanf("%d",&y);
    int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    int a = ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
    printf("%d\n",a);
    char* days[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    printf("%s",days[a-1]);
    return 0;
}
